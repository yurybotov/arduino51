#include "arduino.h"


void setup() {
    SerialBegin(115200);
}


void loop() {
    //if(SerialAvailable() > 0) SerialPutc(SerialGetc());
}
