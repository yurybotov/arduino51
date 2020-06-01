#include "arduino.h"

void setup() {
    Serial0Begin(9600);
}

void loop() {
    Serial0Printf("Hello World!\n");
    delay(1000);
}
