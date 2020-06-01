#include "arduino.h"

void setup() {
    Serial0Begin(9600);
}

void loop() {
    if(Serial0Available()) {
        Serial0Putc(Serial0Read());
    }
}
