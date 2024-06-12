#include "PinClass.h"

PinClass myPins(2, 3, 4, 5);

void setup() {


    int ledStates[][4] = {
        {1, 0, 1, 0},  //0


         {0, 0, 0, 0}
         };  // Example states for the LEDs

    for (int i = 0; i < 2; ++i) {
        myPins.blinkLeds(ledStates[i], 500);  // Blink LEDs with a 500ms delay
    }
    }
}

void loop() {
    // Your loop code here
}