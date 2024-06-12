#include <Arduino.h>

class PinClass {
public:
    PinClass(int pin) {
        pinMode(pin, OUTPUT);
        this->pin = pin;
    }

    void setState(bool state) {
        digitalWrite(pin, state ? HIGH : LOW);
    }

private:
    int pin;
};

// Define LED pins
const int ledPins[] = {2, 3, 4, 5}; // Example digital pin numbers

// Instantiate PinClass for each LED pin
PinClass leds[] = {
    PinClass(ledPins[0]),
    PinClass(ledPins[1]),
    PinClass(ledPins[2]),
    PinClass(ledPins[3])
};

// Example binary numbers to reproduce with LEDs (0 = Off, 1 = On)
const int ledStates[][4] = {
    {0, 0, 0, 0}, // 0
    {0, 0, 0, 1}, // 1
    {0, 0, 1, 0}, // 2
    {0, 0, 1, 1}, // 3
    {0, 1, 0, 0}, // 4
    {0, 1, 0, 1}, // 5
    {0, 1, 1, 0}, // 6
    {0, 1, 1, 1}, // 7
    {1, 0, 0, 0}, // 8
    {1, 0, 0, 1}, // 9
    {1, 0, 1, 0}, // A
    {1, 0, 1, 1}, // B
    {1, 1, 0, 0}, // C
    {1, 1, 0, 1}, // D
    {1, 1, 1, 0}, // E
    {1, 1, 1, 1}  // F
};

// Blink delay in milliseconds
const int blinkDelay = 500;

void setup() {
    // Initial setup if needed
}

void loop() {
    for (int i = 0; i < sizeof(ledStates) / sizeof(ledStates[0]); ++i) {
        for (int j = 0; j < sizeof(ledStates[0]) / sizeof(int); ++j) {
            leds[j].setState(ledStates[i][j]);
        }
        delay(blinkDelay);
    }
}

