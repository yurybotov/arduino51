#include "i2c.h"
#include "N76E003.h"

void I2CBeginSlave(byte address) {

}

void I2CBeginMaster() {

}

void I2CBeginTransmission(byte address) {

}

void I2CEndTransmission(void) {

}

void I2CWrite(byte b) {

}

byte I2CAvailable(void) {

}

byte I2CRead(void) {

}

byte I2CRequestFrom(byte address, byte quantity, byte stop) {
    
}

#define I2C_STANDART
#define I2C_FAST
#define I2C_LOW
#define I2C_HIGHSPEED

void I2CSetClock() {
    
}

void I2COnReceive(void (*handler)(byte)); // if master
void I2COnRequest(void (*handler)(byte)); // if slave





void I2C_ISR(void) __interrupt(6) {
    switch (I2STAT) {
    //===============================================
    //Bus Error, always put in ISR for noise handling
    //===============================================
    case 0x00: /*00H, bus error occurs*/
        STO = 1; //recover from bus error
        break;

        //***************************************************** Master Mode
    case 0x08: /*08H, a START transmitted*/
        STA = 0; //STA bit should be cleared by software
        I2DAT = SLA_ADDR1; //load SLA+W/R
        break;
    case 0x10: /*10H, a repeated START transmitted*/
        STA = 0;
        I2DAT = SLA_ADDR2;
        break;

        //***************************************************** Master Transmitter Mode
    case 0x18: /*18H, SLA+W transmitted, ACK received*/
        I2DAT = NEXT_SEND_DATA1; //load DATA
        break;
    case 0x20: /*20H, SLA+W transmitted, NACK received*/
        STO = 1; //transmit STOP
        AA = 1; //ready for ACK own SLA+W/R or General Call
        break;
    case 0x28: /*28H, DATA transmitted, ACK received*/
        if (Conti_TX_Data) //if continuing to send DATA
            I2DAT = NEXT_SEND_DATA2;
        else { //if no DATA to be sent
            STO = 1;
            AA = 1;
        }
        break;
    case 0x30: /*30H, DATA transmitted, NACK received*/
        STO = 1;
        AA = 1;
        break;

        //***************************************************** Master Mode
    case 0x38: /*38H, arbitration lost*/
        STA = 1; //retry to transmit START if bus free
        break;

        //***************************************************** Master Receiver Mode
    case 0x40: /*40H, SLA+R transmitted, ACK received*/
        AA = 1; //ACK next received DATA
        break;
    case 0x48: /*48H, SLA+R transmitted, NACK received*/
        STO = 1;
        AA = 1;
        break;
    case 0x50: /*50H, DATA received, ACK transmitted*/
        DATA_RECEIVED1 = I2DAT; //store received DATA
        if (To_RX_Last_Data1) //if last DATA will be received
            AA = 0; //not ACK next received DATA
        else //if continuing receiving DATA
            AA = 1;
        break;
    case 0x58: /*58H, DATA received, NACK transmitted*/
        DATA_RECEIVED_LAST1 = I2DAT;
        STO = 1;
        AA = 1;
        break;

        //***************************************************** Slave Receiver and General Call Mode
    case 0x60: /*60H, own SLA+W received, ACK returned*/
        AA = 1;
        break;
    case 0x68: /*68H, arbitration lost in SLA+W/R own SLA+W received, ACK returned */
        AA = 0; //not ACK next received DATA after arbitration lost
        STA = 1; //retry to transmit START if bus free
        break;
    case 0x70: //*70H, General Call received, ACK returned
        AA = 1;
        break;
    case 0x78: /*78H, arbitration lost in SLA+W/R General Call received, ACK returned*/
        AA = 0;
        STA = 1;
        break;
    case 0x80: /*80H, previous own SLA+W, DATA received, ACK returned*/
        DATA_RECEIVED2 = I2DAT;
        if (To_RX_Last_Data2)
            AA = 0;
        else
            AA = 1;
        break;
    case 0x88: /*88H, previous own SLA+W, DATA received, NACK returned, not addressed SLAVE mode entered*/
        DATA_RECEIVED_LAST2 = I2DAT;
        AA = 1; //wait for ACK next Master addressing
        break;
    case 0x90: /*90H, previous General Call, DATA received, ACK returned*/
        DATA_RECEIVED3 = I2DAT;
        if (To_RX_Last_Data3)
            AA = 0;
        else
            AA = 1;
        break;
    case 0x98: /*98H, previous General Call, DATA received,NACK returned, not addressed SLAVE mode entered*/
        DATA_RECEIVED_LAST3 = I2DAT;
        AA = 1;
        break;

        //***************************************************** Slave Mode
    case 0xA0: /*A0H, STOP or repeated START received while still addressed SLAVE mode*/
        AA = 1;
        break;

        //***************************************************** Slave Transmitter Mode
    case 0xA8: /*A8H, own SLA+R received, ACK returned*/
        I2DAT = NEXT_SEND_DATA3;
        AA = 1; //when AA is “1”, not last data to be transmitted
        break;
    case 0xB0: /*B0H, arbitration lost in SLA+W/R own SLA+R received, ACK returned */
        I2DAT = DUMMY_DATA;
        AA = 0; //when AA is “0”, last data to be transmitted
        STA = 1; //retry to transmit START if bus free
        break;
    case 0xB8: /*B8H, previous own SLA+R, DATA transmitted, ACK received*/
        I2DAT = NEXT_SEND_DATA4;
        if (To_TX_Last_Data) //if last DATA will be transmitted
            AA = 0;
        else
            AA = 1;
        break;
    case 0xC0: /*C0H, previous own SLA+R, DATA transmitted, NACK received, not addressed SLAVE mode entered*/
        AA = 1;
        break;
    case 0xC8: /*C8H, previous own SLA+R, last DATA transmitted, ACK received, not addressed SLAVE  mode entered*/
        AA = 1;
        break;
    } //end of switch (I2STAT)
    SI = 0; //SI should be the last command of I2C ISR
    while (STO)
        ; //wait for STOP transmitted or bus error
    //free, STO is cleared by hardware
}
