#include <Arduino.h>
#include <ChainableLED.h>

#define NUM_LED 1

ChainableLED leds(7, 8, NUM_LED);

void setup() {
  // leds.init();
}

byte power = 0;

void loop() {
  for (byte i = 0; i < NUM_LED; i++) {
    if (i % 2 == 0) {
      leds.setColorRGB(i, power, 0, 0);
    }
    else {
      leds.setColorRGB(i, 0, 255 - power, 0);
    }
  }
  power += 10;
  delay(500);
}