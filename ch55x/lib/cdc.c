/********************************** (C) COPYRIGHT *******************************
* File Name          : CDC.C
* Author             : WCH
* Version            : V1.0
* Date               : 2017/03/01
* Description        : CH554做CDC设备转串口，选择串口1
*******************************************************************************/
#include <string.h>

#include <ch554.h>
#include <ch554_usb.h>
#include "cdc.h"
#include "ticker.h"

__xdata __at (0x0000) uint8_t  Ep0Buffer[DEFAULT_ENDP0_SIZE];
__xdata __at (0x0040) uint8_t  Ep1Buffer[DEFAULT_ENDP1_SIZE];
__xdata __at (0x0080) uint8_t  Ep2Buffer[2*MAX_PACKET_SIZE];

uint16_t SetupLen;
uint8_t   SetupReq,Count,UsbConfig;
const uint8_t * pDescr;
USB_SETUP_REQ   SetupReqBuf;

volatile byte transferpos = 0;

#define UsbSetupBuf     ((PUSB_SETUP_REQ)Ep0Buffer)

#define  SET_LINE_CODING                0X20            // Configures DTE rate, stop-bits, parity, and number-of-character
#define  GET_LINE_CODING                0X21            // This request allows the host to find out the currently configured line coding.
#define  SET_CONTROL_LINE_STATE         0X22            // This request generates RS-232/V.24 style control signals.

__code uint8_t DevDesc[] = {
    0x12, // bLength
    0x01, // bDescriptorType - device
    0x10, 0x01, // bcdUSB - 1.10
    0x02, // bDeviceClass - CDC
    0x02, // bDeviceSubClass
    0x00, // bDeviceProtocol
    DEFAULT_ENDP0_SIZE, // bMaxPacketSize
    0x86, 0x1a, // idVendor - 0x1a86 
    0x22, 0x57, // idProduct - 0x5722
    0x00, 0x01, // bcdDevice - 1.00
    0x01, // index of string descriptor manufacter
    0x02, // index of string descriptor product
    0x03, // index of string descriptor serial number
    0x01  // bMaxNumConfiguration
};

__code uint8_t CfgDesc[] ={
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
    0x09, 0x04  // wLANGID[0] - 0x0409 - american english
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
    0x35, 0x00  // unicode '5'
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
    0x57,0x00, // unicode 'W'
    0x43,0x00, // unicode 'C'
    0x48,0x00, // unicode 'H'
};

__xdata uint8_t LineCoding[7]={0x00,0xe1,0x00,0x00,0x00,0x00,0x08};   //初始化波特率为57600，1停止位，无校验，8数据位。

volatile __idata uint8_t USBByteCount = 0;
volatile __idata uint8_t USBBufOutPoint = 0;
volatile __idata uint8_t UpPoint2_Busy  = 0;


/*******************************************************************************
* Function Name  : USBDeviceCfg()
* Description    : USB设备模式配置
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USBDeviceCfg()
{
    USB_CTRL = 0x00;                                                           //清空USB控制寄存器
    USB_CTRL &= ~bUC_HOST_MODE;                                                //该位为选择设备模式
    USB_CTRL |=  bUC_DEV_PU_EN | bUC_INT_BUSY | bUC_DMA_EN;                    //USB设备和内部上拉使能,在中断期间中断标志未清除前自动返回NAK
    USB_DEV_AD = 0x00;                                                         //设备地址初始化
    //     USB_CTRL |= bUC_LOW_SPEED;
    //     UDEV_CTRL |= bUD_LOW_SPEED;                                                //选择低速1.5M模式
    USB_CTRL &= ~bUC_LOW_SPEED;
    UDEV_CTRL &= ~bUD_LOW_SPEED;                                             //选择全速12M模式，默认方式
    UDEV_CTRL = bUD_PD_DIS;  // 禁止DP/DM下拉电阻
    UDEV_CTRL |= bUD_PORT_EN;                                                  //使能物理端口
}
/*******************************************************************************
* Function Name  : USBDeviceIntCfg()
* Description    : USB设备模式中断初始化
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USBDeviceIntCfg()
{
    USB_INT_EN |= bUIE_SUSPEND;                                               //使能设备挂起中断
    USB_INT_EN |= bUIE_TRANSFER;                                              //使能USB传输完成中断
    USB_INT_EN |= bUIE_BUS_RST;                                               //使能设备模式USB总线复位中断
    USB_INT_FG |= 0x1F;                                                       //清中断标志
    IE_USB = 1;                                                               //使能USB中断
    EA = 1;                                                                   //允许单片机中断
}
/*******************************************************************************
* Function Name  : USBDeviceEndPointCfg()
* Description    : USB设备模式端点配置，模拟兼容HID设备，除了端点0的控制传输，还包括端点2批量上下传
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USBDeviceEndPointCfg()
{
    // TODO: Is casting the right thing here? What about endianness?
    UEP1_DMA = (uint16_t) Ep1Buffer;                                                      //端点1 发送数据传输地址
    UEP2_DMA = (uint16_t) Ep2Buffer;                                                      //端点2 IN数据传输地址
    UEP2_3_MOD = 0xCC;                                                         //端点2/3 单缓冲收发使能
    UEP2_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK | UEP_R_RES_ACK;                 //端点2自动翻转同步标志位，IN事务返回NAK，OUT返回ACK

    UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK;                                 //端点1自动翻转同步标志位，IN事务返回NAK
    UEP0_DMA = (uint16_t) Ep0Buffer;                                                      //端点0数据传输地址
    UEP4_1_MOD = 0X40;                                                         //端点1上传缓冲区；端点0单64字节收发缓冲区
    UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;                                 //手动翻转，OUT事务返回ACK，IN事务返回NAK
}
/*******************************************************************************
* Function Name  : Config_Uart1(uint8_t *cfg_uart)
* Description    : 配置串口1参数
* Input          : 串口配置参数 四位波特率、停止位、校验、数据位
* Output         : None
* Return         : None
*******************************************************************************/
void Config_Uart1(uint8_t *cfg_uart)
{
    uint32_t uart1_buad = 0;
    *((uint8_t *)&uart1_buad) = cfg_uart[0];
    *((uint8_t *)&uart1_buad+1) = cfg_uart[1];
    *((uint8_t *)&uart1_buad+2) = cfg_uart[2];
    *((uint8_t *)&uart1_buad+3) = cfg_uart[3];
    //SBAUD1 = 256 - FREQ_SYS/16/uart1_buad; //  SBAUD1 = 256 - Fsys / 16 / baud rate
    //IE_UART1 = 1;
}
/*******************************************************************************
* Function Name  : DeviceInterrupt()
* Description    : CH559USB中断处理函数
*******************************************************************************/


void DeviceInterrupt(void) __interrupt (INT_NO_USB)                       //USB中断服务程序,使用寄存器组1
{
    uint16_t len;
    if(UIF_TRANSFER)                                                            //USB传输完成标志
    {
        switch (USB_INT_ST & (MASK_UIS_TOKEN | MASK_UIS_ENDP))
        {
        case UIS_TOKEN_IN | 1:                                                  //endpoint 1# 端点中断上传
            UEP1_T_LEN = 0;
            UEP1_CTRL = UEP1_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_NAK;           //默认应答NAK
            break;
        case UIS_TOKEN_IN | 2:                                                  //endpoint 2# 端点批量上传
        {
            UEP2_T_LEN = 0;                                                    //预使用发送长度一定要清空
            UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_NAK;           //默认应答NAK
            UpPoint2_Busy = 0;                                                  //清除忙标志
        }
            break;
        case UIS_TOKEN_OUT | 2:                                                 //endpoint 3# 端点批量下传
            if ( U_TOG_OK )                                                     // 不同步的数据包将丢弃
            {
                USBByteCount = USB_RX_LEN;
                USBBufOutPoint = 0;                                             //取数据指针复位
                UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_R_RES | UEP_R_RES_NAK;       //收到一包数据就NAK，主函数处理完，由主函数修改响应方式
            }
            break;
        case UIS_TOKEN_SETUP | 0:                                                //SETUP事务
            len = USB_RX_LEN;
            if(len == (sizeof(USB_SETUP_REQ)))
            {
                SetupLen = ((uint16_t)UsbSetupBuf->wLengthH<<8) | (UsbSetupBuf->wLengthL);
                len = 0;                                                      // 默认为成功并且上传0长度
                SetupReq = UsbSetupBuf->bRequest;
                if ( ( UsbSetupBuf->bRequestType & USB_REQ_TYP_MASK ) != USB_REQ_TYP_STANDARD )//非标准请求
                {
                    switch( SetupReq )
                    {
                    case GET_LINE_CODING:   //0x21  currently configured
                        pDescr = LineCoding;
                        len = sizeof(LineCoding);
                        len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;  // 本次传输长度
                        memcpy(Ep0Buffer,pDescr,len);
                        SetupLen -= len;
                        pDescr += len;
                        break;
                    case SET_CONTROL_LINE_STATE:  //0x22  generates RS-232/V.24 style control signals
                        break;
                    case SET_LINE_CODING:      //0x20  Configure
                        break;
                    default:
                        len = 0xFF;  								 					                 /*命令不支持*/
                        break;
                    }
                }
                else                                                             //标准请求
                {
                    switch(SetupReq)                                             //请求码
                    {
                    case USB_GET_DESCRIPTOR:
                        switch(UsbSetupBuf->wValueH)
                        {
                        case 1:                                                       //设备描述符
                            pDescr = DevDesc;                                         //把设备描述符送到要发送的缓冲区
                            len = sizeof(DevDesc);
                            break;
                        case 2:                                                        //配置描述符
                            pDescr = CfgDesc;                                          //把设备描述符送到要发送的缓冲区
                            len = sizeof(CfgDesc);
                            break;
                        case 3:
                            switch(UsbSetupBuf->wValueL) {
                                case 0: pDescr = LangDes; len = sizeof(LangDes); break;
                                case 1: pDescr = Manuf_Des; len = sizeof(Manuf_Des); break;
                                case 2: pDescr = Prod_Des; len = sizeof(Prod_Des); break;
                                case 3: pDescr = SerDes; len = sizeof(SerDes); break;
                            }

                            /*if(UsbSetupBuf->wValueL == 0)
                            {
                                pDescr = LangDes;
                                len = sizeof(LangDes);
                            }
                            else if(UsbSetupBuf->wValueL == 1)
                            {
                                pDescr = Manuf_Des;
                                len = sizeof(Manuf_Des);
                            }
                            else if(UsbSetupBuf->wValueL == 2)
                            {
                                pDescr = Prod_Des;
                                len = sizeof(Prod_Des);
                            }
                            else //if(UsbSetupBuf->wValueL == 3)
                            {
                                pDescr = SerDes;
                                len = sizeof(SerDes);
                            }*/
                            break;
                        default:
                            len = 0xff;                                                //不支持的命令或者出错
                            break;
                        }
                        if ( SetupLen > len )
                        {
                            SetupLen = len;    //限制总长度
                        }
                        len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;                            //本次传输长度
                        memcpy(Ep0Buffer,pDescr,len);                                  //加载上传数据
                        SetupLen -= len;
                        pDescr += len;
                        break;
                    case USB_SET_ADDRESS:
                        SetupLen = UsbSetupBuf->wValueL;                              //暂存USB设备地址
                        break;
                    case USB_GET_CONFIGURATION:
                        Ep0Buffer[0] = UsbConfig;
                        if ( SetupLen >= 1 )
                        {
                            len = 1;
                        }
                        break;
                    case USB_SET_CONFIGURATION:
                        UsbConfig = UsbSetupBuf->wValueL;
                        break;
                    case USB_GET_INTERFACE:
                        break;
                    case USB_CLEAR_FEATURE:                                            //Clear Feature
                        if( ( UsbSetupBuf->bRequestType & 0x1F ) == USB_REQ_RECIP_DEVICE )                  /* 清除设备 */
                        {
                            if( ( ( ( uint16_t )UsbSetupBuf->wValueH << 8 ) | UsbSetupBuf->wValueL ) == 0x01 )
                            {
                                if( CfgDesc[ 7 ] & 0x20 )
                                {
                                    /* 唤醒 */
                                }
                                else
                                {
                                    len = 0xFF;                                        /* 操作失败 */
                                }
                            }
                            else
                            {
                                len = 0xFF;                                            /* 操作失败 */
                            }
                        }
                        else if ( ( UsbSetupBuf->bRequestType & USB_REQ_RECIP_MASK ) == USB_REQ_RECIP_ENDP )// 端点
                        {
                            switch( UsbSetupBuf->wIndexL )
                            {
                            case 0x83:
                                UEP3_CTRL = UEP3_CTRL & ~ ( bUEP_T_TOG | MASK_UEP_T_RES ) | UEP_T_RES_NAK;
                                break;
                            case 0x03:
                                UEP3_CTRL = UEP3_CTRL & ~ ( bUEP_R_TOG | MASK_UEP_R_RES ) | UEP_R_RES_ACK;
                                break;
                            case 0x82:
                                UEP2_CTRL = UEP2_CTRL & ~ ( bUEP_T_TOG | MASK_UEP_T_RES ) | UEP_T_RES_NAK;
                                break;
                            case 0x02:
                                UEP2_CTRL = UEP2_CTRL & ~ ( bUEP_R_TOG | MASK_UEP_R_RES ) | UEP_R_RES_ACK;
                                break;
                            case 0x81:
                                UEP1_CTRL = UEP1_CTRL & ~ ( bUEP_T_TOG | MASK_UEP_T_RES ) | UEP_T_RES_NAK;
                                break;
                            case 0x01:
                                UEP1_CTRL = UEP1_CTRL & ~ ( bUEP_R_TOG | MASK_UEP_R_RES ) | UEP_R_RES_ACK;
                                break;
                            default:
                                len = 0xFF;                                         // 不支持的端点
                                break;
                            }
                        }
                        else
                        {
                            len = 0xFF;                                                // 不是端点不支持
                        }
                        break;
                    case USB_SET_FEATURE:                                          /* Set Feature */
                        if( ( UsbSetupBuf->bRequestType & 0x1F ) == USB_REQ_RECIP_DEVICE )                  /* 设置设备 */
                        {
                            if( ( ( ( uint16_t )UsbSetupBuf->wValueH << 8 ) | UsbSetupBuf->wValueL ) == 0x01 )
                            {
                                if( CfgDesc[ 7 ] & 0x20 )
                                {
                                    /* 休眠 */
#ifdef DE_PRINTF
                                    printf( "suspend\n" );                                                             //睡眠状态
#endif
                                    while ( XBUS_AUX & bUART0_TX )
                                    {
                                        ;    //等待发送完成
                                    }
                                    SAFE_MOD = 0x55;
                                    SAFE_MOD = 0xAA;
                                    WAKE_CTRL = bWAK_BY_USB | bWAK_RXD0_LO | bWAK_RXD1_LO;                      //USB或者RXD0/1有信号时可被唤醒
                                    PCON |= PD;                                                                 //睡眠
                                    SAFE_MOD = 0x55;
                                    SAFE_MOD = 0xAA;
                                    WAKE_CTRL = 0x00;
                                }
                                else
                                {
                                    len = 0xFF;                                        /* 操作失败 */
                                }
                            }
                            else
                            {
                                len = 0xFF;                                            /* 操作失败 */
                            }
                        }
                        else if( ( UsbSetupBuf->bRequestType & 0x1F ) == USB_REQ_RECIP_ENDP )             /* 设置端点 */
                        {
                            if( ( ( ( uint16_t )UsbSetupBuf->wValueH << 8 ) | UsbSetupBuf->wValueL ) == 0x00 )
                            {
                                switch( ( ( uint16_t )UsbSetupBuf->wIndexH << 8 ) | UsbSetupBuf->wIndexL )
                                {
                                case 0x83:
                                    UEP3_CTRL = UEP3_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;/* 设置端点3 IN STALL */
                                    break;
                                case 0x03:
                                    UEP3_CTRL = UEP3_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;/* 设置端点3 OUT Stall */
                                    break;
                                case 0x82:
                                    UEP2_CTRL = UEP2_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;/* 设置端点2 IN STALL */
                                    break;
                                case 0x02:
                                    UEP2_CTRL = UEP2_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;/* 设置端点2 OUT Stall */
                                    break;
                                case 0x81:
                                    UEP1_CTRL = UEP1_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL;/* 设置端点1 IN STALL */
                                    break;
                                case 0x01:
                                    UEP1_CTRL = UEP1_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL;/* 设置端点1 OUT Stall */
                                default:
                                    len = 0xFF;                                    /* 操作失败 */
                                    break;
                                }
                            }
                            else
                            {
                                len = 0xFF;                                      /* 操作失败 */
                            }
                        }
                        else
                        {
                            len = 0xFF;                                          /* 操作失败 */
                        }
                        break;
                    case USB_GET_STATUS:
                        Ep0Buffer[0] = 0x00;
                        Ep0Buffer[1] = 0x00;
                        if ( SetupLen >= 2 )
                        {
                            len = 2;
                        }
                        else
                        {
                            len = SetupLen;
                        }
                        break;
                    default:
                        len = 0xff;                                                    //操作失败
                        break;
                    }
                }
            }
            else
            {
                len = 0xff;                                                         //包长度错误
            }
            if(len == 0xff)
            {
                SetupReq = 0xFF;
                UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_STALL | UEP_T_RES_STALL;//STALL
            }
            else if(len <= DEFAULT_ENDP0_SIZE)                                                       //上传数据或者状态阶段返回0长度包
            {
                UEP0_T_LEN = len;
                UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK;//默认数据包是DATA1，返回应答ACK
            }
            else
            {
                UEP0_T_LEN = 0;  //虽然尚未到状态阶段，但是提前预置上传0长度数据包以防主机提前进入状态阶段
                UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK;//默认数据包是DATA1,返回应答ACK
            }
            break;
        case UIS_TOKEN_IN | 0:                                                      //endpoint0 IN
            switch(SetupReq)
            {
            case USB_GET_DESCRIPTOR:
                len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen;                                 //本次传输长度
                memcpy( Ep0Buffer, pDescr, len );                                   //加载上传数据
                SetupLen -= len;
                pDescr += len;
                UEP0_T_LEN = len;
                UEP0_CTRL ^= bUEP_T_TOG;                                             //同步标志位翻转
                break;
            case USB_SET_ADDRESS:
                USB_DEV_AD = USB_DEV_AD & bUDA_GP_BIT | SetupLen;
                UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
                break;
            default:
                UEP0_T_LEN = 0;                                                      //状态阶段完成中断或者是强制上传0长度数据包结束控制传输
                UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
                break;
            }
            break;
        case UIS_TOKEN_OUT | 0:  // endpoint0 OUT
            if(SetupReq ==SET_LINE_CODING)  //设置串口属性
            {
                if( U_TOG_OK )
                {
                    memcpy(LineCoding,UsbSetupBuf,USB_RX_LEN);
                    Config_Uart1(LineCoding);
                    UEP0_T_LEN = 0;
                    UEP0_CTRL |= UEP_R_RES_ACK | UEP_T_RES_ACK;  // 准备上传0包
                }
            }
            else
            {
                UEP0_T_LEN = 0;
                UEP0_CTRL |= UEP_R_RES_ACK | UEP_T_RES_NAK;  //状态阶段，对IN响应NAK
            }
            break;
        default:
            break;
        }
        UIF_TRANSFER = 0;                                                           //写0清空中断
    }
    if(UIF_BUS_RST)                                                                 //设备模式USB总线复位中断
    {
#ifdef DE_PRINTF
        printf( "reset\n" );                                                             //睡眠状态
#endif
        UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
        UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK;
        UEP2_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK | UEP_R_RES_ACK;
        USB_DEV_AD = 0x00;
        UIF_SUSPEND = 0;
        UIF_TRANSFER = 0;
        UIF_BUS_RST = 0;                                                             //清中断标志
//        Uart_Input_Point = 0;   //循环缓冲区输入指针
//        Uart_Output_Point = 0;  //循环缓冲区读出指针
//        UartByteCount = 0;      //当前缓冲区剩余待取字节数
        USBByteCount = 0;       //USB端点收到的长度
        UsbConfig = 0;          //清除配置值
        UpPoint2_Busy = 0;
        
        transferpos = 0;
    }
    if (UIF_SUSPEND)                                                                 //USB总线挂起/唤醒完成
    {
        UIF_SUSPEND = 0;
        if ( USB_MIS_ST & bUMS_SUSPEND )                                             //挂起
        {
#ifdef DE_PRINTF
            printf( "suspend\n" );                                                             //睡眠状态
#endif
            while ( XBUS_AUX & bUART0_TX )
            {
                ;    //等待发送完成
            }
            SAFE_MOD = 0x55;
            SAFE_MOD = 0xAA;
            WAKE_CTRL = bWAK_BY_USB | bWAK_RXD0_LO | bWAK_RXD1_LO;                      //USB或者RXD0/1有信号时可被唤醒
            PCON |= PD;                                                                 //睡眠
            SAFE_MOD = 0x55;
            SAFE_MOD = 0xAA;
            WAKE_CTRL = 0x00;
        }
    }
    else {                                                                             //意外的中断,不可能发生的情况
        USB_INT_FG = 0xFF;                                                             //清中断标志
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
    while(UpPoint2_Busy)
        ;
    Ep2Buffer[MAX_PACKET_SIZE+transferpos] = c;
    transferpos++;
    if(transferpos > 39) CDCSend();
}

implements_printf(Serial)

void CDCReceive(void) {
    if(UsbConfig) {
        if(USBByteCount && !cbFull()) {
            //while(USBByteCount > 0 && !cbFull()) {
                cbPut(Ep2Buffer[USBBufOutPoint++],Serial);
            //    USBBufOutPoint++;
                USBByteCount--;
            //}
            if(USBByteCount == 0)
                UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_R_RES | UEP_R_RES_ACK;
        }
    }  
}

void CDCSend(void) {
    byte length;
    if(UsbConfig) {
        length = transferpos;
        if(length > 0) {
            if(!UpPoint2_Busy) {
                transferpos = 0;

                UEP2_T_LEN = length;
                UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_ACK;
                UpPoint2_Busy = 1;
            }
        }
    }    
}

void CDC_loop(void) {
    byte i, length;
    if(UsbConfig) {
        if(USBByteCount && !cbFull()) {  //USB接收端点有数据
            //CH554UART1SendByte(Ep2Buffer[USBBufOutPoint++]);
            //cbPut(Ep2Buffer[USBBufOutPoint++],Serial);
            //tempbuf[tempto++] = Ep2Buffer[USBBufOutPoint++];
            //if (tempto == 64) tempto = 0;
            /*while(USBByteCount) {
                tempbuf[tempto++] = Ep2Buffer[USBBufOutPoint++];
                tempcnt++;
                USBByteCount--;
            }
            //tempcnt++;
            //USBByteCount--;
            if(USBByteCount==0)
                UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_R_RES | UEP_R_RES_ACK;*/
            i = 8;
            while(USBByteCount > 0 && i && !cbFull()) {
                cbPut(Ep2Buffer[USBBufOutPoint++],Serial);
                USBByteCount--;
                i--;
            }
            if(USBByteCount==0)
                UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_R_RES | UEP_R_RES_ACK;
        }
        length = transferpos;
        //length = tempcnt;
        if(length > 0) {
            Uart_Timeout++;
            if(!UpPoint2_Busy) {   //端点不繁忙（空闲后的第一包数据，只用作触发上传）
                if(length > 38 || Uart_Timeout>100) {
                    Uart_Timeout = 0;
                    transferpos = 0;
                    //tempcnt = 0;
                    //tempto = 0;
                    //写上传端点
                    //memcpy(Ep2Buffer+MAX_PACKET_SIZE,tempbuf,length);
                    //for(i = 0; i < length; i++) { Ep2Buffer[MAX_PACKET_SIZE+i] = tempbuf[i]; }
                    //Uart_Output_Point+=length;
                    //if(Uart_Output_Point>=UART_REV_LEN)
                    //    Uart_Output_Point = 0;
                    //for(i = 0; i < length; i++) { Ep2Buffer[MAX_PACKET_SIZE+i] = cbGet(Serial); }
                    UEP2_T_LEN = length;                                                    //预使用发送长度一定要清空
                    UEP2_CTRL = UEP2_CTRL & ~ MASK_UEP_T_RES | UEP_T_RES_ACK;            //应答ACK
                    UpPoint2_Busy = 1;
                }
            }
        }
    }
}
