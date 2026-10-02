
#include <Arduino.h>

const uint8_t LED1 = LED_BUILTIN;

void setup() {
    pinMode(LED1, OUTPUT);
}

void loop() {
    digitalWrite(LED1, HIGH);
    delay(1000);

    digitalWrite(LED1, LOW);
    delay(1000);
}