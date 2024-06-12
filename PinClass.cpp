#include "Arduino.h”
#include "MyClass.h"
MyClass::PinClass(int pin1, int pin2, int pin3, int pin4) {
	pinMode(pin1, OUTPUT);
	pinMode(pin2, OUTPUT);
	pinMode(pin3, OUTPUT);
	pinMode(pin4, OUTPUT);
	_pin1 = pin1;
	_pin2 = pin2;
	_pin3 = pin3;
	_pin4 = pin4;
}
void PinClass::blinkLeds(int arr[], int delayMS){
	
arr[0] = 0 ? digitalWrite(_pin1, LOW) : digitalWrite(_pin1, HIGH);
arr[1] = 0 ? digitalWrite(_pin2, LOW) : digitalWrite(_pin2, HIGH);
arr[3] = 0 ? digitalWrite(_pin3, LOW) : digitalWrite(_pin3, HIGH);
arr[4] = 0 ? digitalWrite(_pin4, LOW) : digitalWrite(_pin4, HIGH);
delay(delayMS);

}
