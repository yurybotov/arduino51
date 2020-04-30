#include <string.h>

#include "cdc.h"
#include "ticker.h"
#include <ch554.h>
#include <ch554_usb.h>


__xdata __at(0x0000) uint8_t Ep0Buffer[DEFAULT_ENDP0_SIZE];
__xdata __at(0x0040) uint8_t Ep1Buffer[DEFAULT_ENDP1_SIZE];
__xdata __at(0x0080) uint8_t Ep2Buffer[2 * MAX_PACKET_SIZE];

uint16_t SetupLen;
uint8_t SetupReq, Count, UsbConfig;
const uint8_t* pDescr;
USB_SETUP_REQ SetupReqBuf;

volatile byte transferpos = 0;

#define UsbSetupBuf ((PUSB_SETUP_REQ)Ep0Buffer)

#define SET_LINE_CODING 0X20 // Configures DTE rate, stop-bits, parity, and number-of-character
#define GET_LINE_CODING 0X21 // This request allows the host to find out the currently configured line coding.
#define SET_CONTROL_LINE_STATE 0X22 // This request generates RS-232/V.24 style control signals.

__code uint8_t DevDesc[] = {
    0x12, // bLength
    0x01, // bDescriptorType - device
    0x00, 0x02, // bcdUSB - 1.10
    0x02, // bDeviceClass - CDC
    0x02, // bDeviceSubClass
    0x00, // bDeviceProtocol
    DEFAULT_ENDP0_SIZE, // bMaxPacketSize
    0x86, 0x1a, // idVendor - 0x1a86
    0x22, 0x57, // idProduct - 0x5722
    0x00, 0x02, // bcdDevice - 1.00
    0x01, // index of string descriptor manufacter
    0x02, // index of string descriptor product
    0x03, // index of string descriptor serial number
    0x01 // bMaxNumConfiguration
};

__code uint8_t CfgDesc[] = {
    // configuration descriptor
    0x09, // bLength
    0x02, // bDescriptorType - configuration
    0x43, 0x00, // wTotalLength - 0x0043?
    0x02, // bNumInterfaces
    0x01, // bConfigurationValue
    0x00, // iConfiguration - index of string descriptor configuration
    0x80, // bmAttributes - bus powered
    0xFA, // MaxPower - 500 mA
    // interface descriptor
    0x09, // bLength
    0x04, // bDescriptorType - interface
    0x00, // bInterfaceNumber
    0x00, // bAlternateSetting
    0x01, // bNumEndPoints - 1
    0x02, // bInterfaceClass - CDC
    0x02, // bInterfaceSubClass - abstract control model
    0x01, // bInterfaceProtocol - common AT commands
    0x00, // iInterface
    // header functional descriptor
    0x05, // bLength
    0x24, // bDescriptorType - CS_INTERFACE
    0x00, // bDescriptorSubType - header func descriptor
    0x10, // bcdCDC - release number
    0x01,
    // call management functional descriptor
    0x05, // bLength
    0x24, // bDescriptorType - CS_INTERFACE
    0x01, // bDescriptorSubType - call management functional descriptor
    0x00, // bmCapabilities - D0+D1
    0x01, // bDataInterface - 1
    // ACM functional descriptor
    0x04, // bFunctionLength
    0x24, // bDescriptorType - CS_INTERFACE
    0x02, // bDescriptorSubType - abstract control model
    0x02, // bmCapabilities
    // union functional descriptor
    0x05, // bFunctionLength
    0x24, // bDescriptorType - CS_INTERFACE
    0x06, // bDescriptorSubType - union functional descriptor
    0x00, // bMasterInterface - CDC
    0x01, // bSlaveInterface0 - data class interface
    // endpoint descriptor
    0x07, // bLength
    0x05, // bDescriptorType - endpoint
    0x81, // bEndpointAddress
    0x03, // bmAttributes - interrupt
    0x08, 0x00, // wMaxPacketSize - 0x0008
    0x10, // bInterval
    // data class interface
    0x09, // bLength
    0x04, // bDescriptorType - interface
    0x01, // bInterfaceNumber
    0x00, // bAlternateSetting
    0x02, // bNumEndPoints - 2
    0x0a, // bInterfaceClass - CDC
    0x00, // bInterfaceSubClass
    0x00, // bInterfaceProtocol
    0x00, // iInterface
    // endpoint
    0x07, // bLength
    0x05, // bDescriptorType - endpoint
    0x02, // bEndpointAddress - out2
    0x02, // bmAttributes - bulk
    0x40, 0x00, // wMaxPacketSize - 0x0040
    0x00, // bInterval
    // endpoint
    0x07, // bLength
    0x05, // bDescriptorType - endpoint
    0x82, // bEndpointAddress - in2
    0x02, // bmAttributes - bulk
    0x40, 0x00, // wMaxPacketSize - 0x0040
    0x00, // bInterval
};
// language descriptor
unsigned char __code LangDes[] = {
    0x04, // bLength
    0x03, // bDescriptorType - string
    0x09, 0x04 // wLANGID[0] - 0x0409 - american english
};
// serial number descriptor
unsigned char __code SerDes[] = {
    0x14, // bLength
    0x03, // bDescriptorType - string
    0x32, 0x00, // unicode '2'
    0x30, 0x00, // unicode '0'
    0x31, 0x00, // unicode '1'
    0x37, 0x00, // unicode '7'
    0x2D, 0x00, // unicode '-'
    0x32, 0x00, // unicode '2'
    0x2D, 0x00, // unicode '-'
    0x32, 0x00, // unicode '2'
    0x35, 0x00 // unicode '5'
};
// product descriptor
unsigned char __code Prod_Des[] = {
    0x14, // bLength
    0x03, // bDescriptorType - string
    0x43, 0x00, // unicode 'C'
    0x48, 0x00, // unicode 'H'
    0x35, 0x00, // unicode '5'
    0x35, 0x00, // unicode '5'
    0x34, 0x00, // unicode '4'
    0x5F, 0x00, // unicode '_'
    0x43, 0x00, // unicode 'C'
    0x44, 0x00, // unicode 'D'
    0x43, 0x00, // unicode 'C'
};
// manufacter descriptor
unsigned char __code Manuf_Des[] = {
    0x08, // bLength
    0x03, // bDescriptorType - string
    0x57, 0x00, // unicode 'W'
    0x43, 0x00, // unicode 'C'
    0x48, 0x00, // unicode 'H'
};

__xdata uint8_t LineCoding[7] = { 0x00, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x08 };

volatile __idata uint8_t USBByteCount = 0;
volatile __idata uint8_t USBBufOutPoint = 0;
volatile __idata uint8_t UpPoint2_Busy = 0;

void USBDeviceCfg() {
    USB_CTRL = 0x00;
    USB_CTRL &= ~bUC_HOST_MODE;
    USB_CTRL |= bUC_DEV_PU_EN | bUC_INT_BUSY | bUC_DMA_EN;
    USB_DEV_AD = 0x00;
    //     USB_CTRL |= bUC_LOW_SPEED;
    //     UDEV_CTRL |= bUD_LOW_SPEED;
    USB_CTRL &= ~bUC_LOW_SPEED;
    UDEV_CTRL &= ~bUD_LOW_SPEED;
    UDEV_CTRL = bUD_PD_DIS;
    UDEV_CTRL |= bUD_PORT_EN;
}

void USBDeviceIntCfg() {
    USB_INT_EN |= bUIE_SUSPEND;
    USB_INT_EN |= bUIE_TRANSFER;
    USB_INT_EN |= bUIE_BUS_RST;
    USB_INT_FG |= 0x1F;
    IE_USB = 1;
    EA = 1;
}

void USBDeviceEndPointCfg() {
    UEP1_DMA = (uint16_t)Ep1Buffer;
    UEP2_DMA = (uint16_t)Ep2Buffer;
    UEP2_3_MOD = 0xCC;
    UEP2_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK | UEP_R_RES_ACK;

    UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK;
    UEP0_DMA = (uint16_t)Ep0Buffer;
    UEP4_1_MOD = 0X40;
    UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
}

void Config_Uart1(uint8_t* cfg_uart) { // attavism
    uint32_t uart1_buad = 0;
    *((uint8_t*)&uart1_buad) = cfg_uart[0];
    *((uint8_t*)&uart1_buad + 1) = cfg_uart[1];
    *((uint8_t*)&uart1_buad + 2) = cfg_uart[2];
    *((uint8_t*)&uart1_buad + 3) = cfg_uart[3];
    //SBAUD1 = 256 - FREQ_SYS/16/uart1_buad; //  SBAUD1 = 256 - Fsys / 16 / baud rate
    //IE_UART1 = 1;
}

void DeviceInterrupt(void) __interrupt(INT_NO_USB) {
    uint16_t len;
    if (UIF_TRANSFER) {
        switch (USB_INT_ST & (MASK_UIS_TOKEN | MASK_UIS_ENDP)) {

        case UIS_TOKEN_IN | 1:
            UEP1_T_LEN = 0;
            UEP1_CTRL = UEP1_CTRL & ~MASK_UEP_T_RES | UEP_T_RES_NAK;
            break;

        case UIS_TOKEN_IN | 2:
            UEP2_T_LEN = 0;
            UEP2_CTRL = UEP2_CTRL & ~MASK_UEP_T_RES | UEP_T_RES_NAK;
            UpPoint2_Busy = 0;
            break;

        case UIS_TOKEN_OUT | 2:
            if (U_TOG_OK) {
                USBByteCount = USB_RX_LEN;
                USBBufOutPoint = 0;
                UEP2_CTRL = UEP2_CTRL & ~MASK_UEP_R_RES | UEP_R_RES_NAK;
            }
            break;

        case UIS_TOKEN_SETUP | 0:
            len = USB_RX_LEN;
            if (len == (sizeof(USB_SETUP_REQ))) {
                SetupLen = ((uint16_t)UsbSetupBuf->wLengthH << 8) | (UsbSetupBuf->wLengthL);
                len = 0;
                SetupReq = UsbSetupBuf->bRequest;
                if ((UsbSetupBuf->bRequestType & USB_REQ_TYP_MASK) != USB_REQ_TYP_STANDARD) {
                    switch (SetupReq) {

                    case GET_LINE_CODING: //0x21  currently configured
                        pDescr = LineCoding;
                        len = sizeof(LineCoding);
                        len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;
                        memcpy(Ep0Buffer, pDescr, len);
                        SetupLen -= len;
                        pDescr += len;
                        break;

                    case SET_CONTROL_LINE_STATE:
                        break; //0x22  generates RS-232/V.24 style control signals

                    case SET_LINE_CODING:
                        break; //0x20  Configure
                    default:
                        len = 0xFF;
                        break;
                    }
                } else {
                    switch (SetupReq) {

                    case USB_GET_DESCRIPTOR:
                        switch (UsbSetupBuf->wValueH) {
                        case 1:
                            pDescr = DevDesc;
                            len = sizeof(DevDesc);
                            break;
                        case 2:
                            pDescr = CfgDesc;
                            len = sizeof(CfgDesc);
                            break;
                        case 3:
                            switch (UsbSetupBuf->wValueL) {
                            case 0:
                                pDescr = LangDes;
                                len = sizeof(LangDes);
                                break;
                            case 1:
                                pDescr = Manuf_Des;
                                len = sizeof(Manuf_Des);
                                break;
                            case 2:
                                pDescr = Prod_Des;
                                len = sizeof(Prod_Des);
                                break;
                            case 3:
                                pDescr = SerDes;
                                len = sizeof(SerDes);
                                break;
                            default:
                                len = 0xff;
                                break;
                            }
                            break;
                        default:
                            len = 0xff;
                            break;
                        }
                        if (SetupLen > len)
                            SetupLen = len;

                        len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;
                        memcpy(Ep0Buffer, pDescr, len);
                        SetupLen -= len;
                        pDescr += len;
                        break;

                    case USB_SET_ADDRESS:
                        SetupLen = UsbSetupBuf->wValueL;
                        break;

                    case USB_GET_CONFIGURATION:
                        Ep0Buffer[0] = UsbConfig;
                        if (SetupLen >= 1)
                            len = 1;
                        break;

                    case USB_SET_CONFIGURATION:
                        UsbConfig = UsbSetupBuf->wValueL;
                        break;

                    case USB_GET_INTERFACE:
                        break;

                    case USB_CLEAR_FEATURE:
                        if ((UsbSetupBuf->bRequestType & 0x1F) == USB_REQ_RECIP_DEVICE) {
                            if ((((uint16_t)UsbSetupBuf->wValueH << 8) | UsbSetupBuf->wValueL) == 0x01) {
                                if (CfgDesc[7] & 0x20) {
                                    /* ??? */
                                } else
                                    len = 0xFF;
                            } else
                                len = 0xFF;

                        } else if ((UsbSetupBuf->bRequestType & USB_REQ_RECIP_MASK) == USB_REQ_RECIP_ENDP) {
                            switch (UsbSetupBuf->wIndexL) {
                            case 0x83:
                                UEP3_CTRL = UEP3_CTRL & ~(bUEP_T_TOG | MASK_UEP_T_RES) | UEP_T_RES_NAK;
                                break;
                            case 0x03:
                                UEP3_CTRL = UEP3_CTRL & ~(bUEP_R_TOG | MASK_UEP_R_RES) | UEP_R_RES_ACK;
                                break;
                            case 0x82:
                                UEP2_CTRL = UEP2_CTRL & ~(bUEP_T_TOG | MASK_UEP_T_RES) | UEP_T_RES_NAK;
                                break;
                            case 0x02:
                                UEP2_CTRL = UEP2_CTRL & ~(bUEP_R_TOG | MASK_UEP_R_RES) | UEP_R_RES_ACK;
                                break;
                            case 0x81:
                                UEP1_CTRL = UEP1_CTRL & ~(bUEP_T_TOG | MASK_UEP_T_RES) | UEP_T_RES_NAK;
                                break;
                            case 0x01:
                                UEP1_CTRL = UEP1_CTRL & ~(bUEP_R_TOG | MASK_UEP_R_RES) | UEP_R_RES_ACK;
                                break;
                            default:
                                len = 0xFF;
                                break;
                            }
                        } else
                            len = 0xFF;
                        break;

                    case USB_SET_FEATURE:
                        if ((UsbSetupBuf->bRequestType & 0x1F) == USB_REQ_RECIP_DEVICE) {
                            if ((((uint16_t)UsbSetupBuf->wValueH << 8) | UsbSetupBuf->wValueL) == 0x01) {
                                if (CfgDesc[7] & 0x20) {
                                    while (XBUS_AUX & bUART0_TX)
                                        ; // ???????????
                                    SAFE_MOD = 0x55;
                                    SAFE_MOD = 0xAA;
                                    WAKE_CTRL = bWAK_BY_USB;
                                    PCON |= PD;
                                    SAFE_MOD = 0x55;
                                    SAFE_MOD = 0xAA;
                                    WAKE_CTRL = 0x00;
                                } else
                                    len = 0xFF;
                            } else
                                len = 0xFF;

                        } else if ((UsbSetupBuf->bRequestType & 0x1F) == USB_REQ_RECIP_ENDP) {
                            if ((((uint16_t)UsbSetupBuf->wValueH << 8) | UsbSetupBuf->wValueL) == 0x00) {
                                switch (((uint16_t)UsbSetupBuf->wIndexH << 8) | UsbSetupBuf->wIndexL) {
                                case 0x83:
                                    UEP3_CTRL = UEP3_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;
                                    break;
                                case 0x03:
                                    UEP3_CTRL = UEP3_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;
                                    break;
                                case 0x82:
                                    UEP2_CTRL = UEP2_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;
                                    break;
                                case 0x02:
                                    UEP2_CTRL = UEP2_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;
                                    break;
                                case 0x81:
                                    UEP1_CTRL = UEP1_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;
                                    break;
                                case 0x01:
                                    UEP1_CTRL = UEP1_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;
                                    break;
                                default:
                                    len = 0xFF;
                                    break;
                                }
                            } else
                                len = 0xFF;
                        } else
                            len = 0xFF;
                        break;

                    case USB_GET_STATUS:
                        Ep0Buffer[0] = 0x00;
                        Ep0Buffer[1] = 0x00;
                        if (SetupLen >= 2)
                            len = 2;
                        else
                            len = SetupLen;
                        break;

                    default:
                        len = 0xff;
                        break;
                    }
                }

            } else {
                len = 0xff;
            }
            if (len == 0xff) {
                SetupReq = 0xFF;
                UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_STALL | UEP_T_RES_STALL;
            } else if (len <= DEFAULT_ENDP0_SIZE) {
                UEP0_T_LEN = len;
                UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK;
            } else {
                UEP0_T_LEN = 0;
                UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK;
            }
            break;

        case UIS_TOKEN_IN | 0:
            switch (SetupReq) {
            case USB_GET_DESCRIPTOR:
                len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;
                memcpy(Ep0Buffer, pDescr, len);
                SetupLen -= len;
                pDescr += len;
                UEP0_T_LEN = len;
                UEP0_CTRL ^= bUEP_T_TOG;
                break;
            case USB_SET_ADDRESS:
                USB_DEV_AD = USB_DEV_AD & bUDA_GP_BIT | SetupLen;
                UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
                break;
            default:
                UEP0_T_LEN = 0;
                UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
                break;
            }
            break;

        case UIS_TOKEN_OUT | 0:
            if (SetupReq == SET_LINE_CODING) {
                if (U_TOG_OK) {
                    memcpy(LineCoding, UsbSetupBuf, USB_RX_LEN);
                    Config_Uart1(LineCoding);
                    UEP0_T_LEN = 0;
                    UEP0_CTRL |= UEP_R_RES_ACK | UEP_T_RES_ACK;
                }
            } else {
                UEP0_T_LEN = 0;
                UEP0_CTRL |= UEP_R_RES_ACK | UEP_T_RES_NAK;
            }
            break;

        default:
            break;
        }
        UIF_TRANSFER = 0;
    }

    if (UIF_BUS_RST) {
        UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
        UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK;
        UEP2_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK | UEP_R_RES_ACK;
        USB_DEV_AD = 0x00;
        UIF_SUSPEND = 0;
        UIF_TRANSFER = 0;
        UIF_BUS_RST = 0;
        USBByteCount = 0;
        UsbConfig = 0;
        UpPoint2_Busy = 0;
        transferpos = 0;
    }

    if (UIF_SUSPEND) {
        UIF_SUSPEND = 0;
        if (USB_MIS_ST & bUMS_SUSPEND) {
            while (XBUS_AUX & bUART0_TX)
                ;
            SAFE_MOD = 0x55;
            SAFE_MOD = 0xAA;
            WAKE_CTRL = bWAK_BY_USB;
            PCON |= PD;
            SAFE_MOD = 0x55;
            SAFE_MOD = 0xAA;
            WAKE_CTRL = 0x00;
        }
    } else {
        USB_INT_FG = 0xFF;
    }
}

uint8_t Uart_Timeout = 0;

void SerialBegin(dword speed) {
    (speed);
    USBDeviceCfg();
    USBDeviceEndPointCfg();
    USBDeviceIntCfg();
    UEP0_T_LEN = 0;
    UEP1_T_LEN = 0;
    UEP2_T_LEN = 0;
}

void SerialPutc(byte c) {
    while (UpPoint2_Busy)
        ;
    Ep2Buffer[MAX_PACKET_SIZE + transferpos] = c;
    transferpos++;
    if (transferpos > 39)
        CDCSend();
}

implements_printf(Serial)

    void CDCReceive(void) {
    if (UsbConfig) {
        if (USBByteCount && !cbFull()) {
            byte i = 8;
            while (USBByteCount > 0 && i && !cbFull()) {
                cbPut(Ep2Buffer[USBBufOutPoint++], Serial);
                USBBufOutPoint++;
                USBByteCount--;
                i--;
            }
            if (USBByteCount == 0)
                UEP2_CTRL = UEP2_CTRL & ~MASK_UEP_R_RES | UEP_R_RES_ACK;
        }
    }
}

void CDCSend(void) {
    byte length;
    if (UsbConfig) {
        length = transferpos;
        if (length > 0) {
            if (!UpPoint2_Busy) {
                transferpos = 0;

                UEP2_T_LEN = length;
                UEP2_CTRL = UEP2_CTRL & ~MASK_UEP_T_RES | UEP_T_RES_ACK;
                UpPoint2_Busy = 1;
            }
        }
    }
}
