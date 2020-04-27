#include "buffer.h"

__xdata volatile byte commonbuffer[COMMONBUFFERSIZE];
__xdata volatile byte typebuffer[COMMONBUFFERSIZE/2];
__xdata volatile byte availablebuffer[6];
__xdata volatile byte writepositionbuffer[6];
__xdata volatile byte readpositionbuffer[6];

void cbInit(void) {
    byte i;
    for(i = 0; i < 6; i++) {
        availablebuffer[i] = 0;
        writepositionbuffer[i] = 0;
        readpositionbuffer[i] = 0;
    }
    availablebuffer[0] = COMMONBUFFERSIZE;
}

enum DEVICES cbGetType(byte pos) {
    byte t;
    t = typebuffer[pos/2];
    return pos%2 ? (( t >> 4) & 0xf) : (t & 0xf); 
}

void cbPutType(byte pos, enum DEVICES device) {
    byte t = typebuffer[pos/2];
    if(pos%2) {
        t = (t & 0xf) | (device << 4);
    } else {
        t = (t & 0xf0) | device;
    }
    typebuffer[pos/2] = t;
}

byte cbFull(void) { return cbCount(BLANK) == 0? 1 : 0; }

void cbPut(byte b, enum DEVICES device) {
    byte wp;
    if(!cbFull()) {
        wp = writepositionbuffer[device];
        while(1) {            
            if (cbGetType(wp) == BLANK) {
                cbPutType(wp, device);
                commonbuffer[wp] = b;
                writepositionbuffer[device] = wp;
                availablebuffer[device]++;
                availablebuffer[0]--;
                return;
            } else {
                wp++;
                if(wp == COMMONBUFFERSIZE) 
                    wp = 0;
            }
        }
    }
}

byte cbGet(enum DEVICES device) {
    byte rp;
    if(availablebuffer[device] > 0) {
        rp = readpositionbuffer[device];
        while(1) {
            if(cbGetType(rp) == device) {
                availablebuffer[0]++;
                availablebuffer[device]--;
                cbPutType(rp,BLANK);
                readpositionbuffer[device] = rp;
                return commonbuffer[rp];
            } else {
                rp++;
                if(rp == COMMONBUFFERSIZE) 
                    rp = 0;                
            }
        }
    } else {
        return 0;
    }
}

byte cbCount(enum DEVICES device) {
    return availablebuffer[device];
}
