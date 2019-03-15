#include "Motor.h"

Motor motor(11, 10, 9);

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);

}

void loop() {
    if (Serial.available()) {
        long i = Serial.parseInt();
        motor.drive(i);
        Serial.println("set speed to ");
        Serial.println(i);
    }
}