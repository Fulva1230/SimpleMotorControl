#include "Motor.h"

#define PIN_ENA 11
#define PIN_1 10
#define PIN_2 9

Motor motor(PIN_ENA, PIN_1, PIN_2);

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
//    FFFF
}