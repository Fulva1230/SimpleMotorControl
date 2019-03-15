//
// Created by Fulva on 3/15/2019.
//

#include "Motor.h"

Motor::Motor(uint8_t pin_ena, uint8_t pin_1, uint8_t pin_2) :
        pin_ena(pin_ena),
        pin_1(pin_1),
        pin_2(pin_2) {
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
}

void Motor::drive(int16_t speed) {

    if (speed >= 0) {
        if (speed > 255) {
            speed = 255;
        }
        digitalWrite(pin_1, HIGH);
        digitalWrite(pin_2, LOW);
    } else {
        if (speed < -255) {
            speed = -255;
        }
        digitalWrite(pin_1, LOW);
        digitalWrite(pin_2, HIGH);
    }
    analogWrite(pin_ena, abs(speed));

}
