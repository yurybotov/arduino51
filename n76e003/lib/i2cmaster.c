#include "i2c.h"
#include "N76E003.h"
#include "SFR_Macro.h"
#include "Function_define.h"
#include "../../common/buffer.h"

void I2CBeginSlave(byte address) {

}

void I2CBeginMaster() {
	P13_OpenDrain_Mode;					// don't forget the pull high resister in circuit
	P14_OpenDrain_Mode;					// don't forget the pull high resister in circuit	
    /* Set I2C clock rate */
    I2CLK = (byte)(16000000/100000 - 1); 
    /* Enable I2C */
    set_I2CEN; 
}

void I2CBeginTransmission(byte address) {
    /* Step1 */
    set_STA;                                /* Send Start bit to I2C EEPROM */         
    clr_SI;
    while (!SI);
    /* Step2 */
    clr_STA;                                /* Clear STA and Keep SI value in I2CON */
    I2DAT = address << 1;         /* Send (SLA+W) to EEPROM */
    clr_SI;
    while (!SI);
}

void I2CEndTransmission(void) {
    /* Step7 */
    set_STO;                                /* Set STOP Bit to I2C EEPROM */
    clr_SI;
}

void I2CWrite(byte b) {
    /* Step3 */
    I2DAT = b;          
    clr_SI;
    while (!SI);
}

void I2CRequestFrom(byte address, byte quantity, byte stop) {
    byte i;
    /* Step5 */
    set_STA;                                /* Repeated START */
    clr_SI; 
    while (!SI);
    /* Step6 */
    clr_STA;                                /* Clear STA and Keep SI value in I2CON */
    I2DAT = address << 1 | 1;       /* Send (SLA+R) to EEPROM */
    clr_SI;
    while (!SI);
    /* Step7 */                             /* Verify I2C EEPROM data */
    for (i = 0; i < quantity; i++) {
        set_AA;                             /* Set Assert Acknowledge Control Bit */
        clr_SI;
        while (!SI);
        cbPut(I2DAT,I2C);
    }
    /* Step8 */
    clr_AA;                                 /* Send a NACK to disconnect 24xx64 */
    clr_SI;
    while (!SI);    
    if(stop) {
        /* Step9 */    
        clr_SI;
        set_STO;
    }
}



void I2CSetClock(dword speed) {
    clr_I2CEN;
    I2CLK = (byte)(16000000/speed - 1);
    set_I2CEN;
}

void I2COnReceive(void (*handler)(byte)); // if master
void I2COnRequest(void (*handler)(byte)); // if slave