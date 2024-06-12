#include "PinClass.h"

PinClass myPins(2, 3, 4, 5);

void setup() {
    int ledStates[] = {1, 0, 1, 0};  // Example states for the LEDs
    myPins.blinkLeds(ledStates, 500);  // Blink LEDs with a 500ms delay
}

void loop() {
    // Your loop code here
}