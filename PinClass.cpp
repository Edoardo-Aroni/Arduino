#include "PinClass.h"

PinClass::PinClass(int pin1, int pin2, int pin3, int pin4) {
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
    _pin1 = pin1;
    _pin2 = pin2;
    _pin3 = pin3;
    _pin4 = pin4;
}

void PinClass::blinkLeds(int arr[], int delayMS) {
    digitalWrite(_pin1, arr[0] == 0 ? LOW : HIGH);
    digitalWrite(_pin2, arr[1] == 0 ? LOW : HIGH);
    digitalWrite(_pin3, arr[2] == 0 ? LOW : HIGH);
    digitalWrite(_pin4, arr[3] == 0 ? LOW : HIGH);
    delay(delayMS);
}

