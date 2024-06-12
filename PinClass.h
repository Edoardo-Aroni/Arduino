#ifndef PINCLASS_H
#define PINCLASS_H

#include "Arduino.h"

class PinClass {
public:
    PinClass(int pin1, int pin2, int pin3, int pin4);
    void blinkLeds(int arr[], int delayMS);

private:
    int _pin1, _pin2, _pin3, _pin4;
};

#endif

