#include <Arduino.h>
#include <Grove_LED_Bar.h>

Grove_LED_Bar bar(7, 6, 0);

void setup() {
  bar.begin();
}

void loop() {
  // Turn on all LED
  bar.setBits(0x3ff);
  delay(1000);

  // Turn off all LED
  bar.setBits(0x00);
  delay(1000);

  // Turn on LED 1
  bar.setBits(0b000000000000001); // atau 0x1
  delay(1000);

  // Turn on LED 1 and 3
  bar.setBits(0b000000000000101); // atau 0x5
  delay(1000);

  // Turn on LED 1, 3, 5, 7, 9
  bar.setBits(0x155);
  delay(1000);

  // Turn on LED 2, 4, 6, 8, 10
  bar.setBits(0x2AA);
  delay(1000);

  // Turn on LED 1, 2, 3, 4, 5
  bar.setBits(0b000000000011111); // atau 0x1F
  delay(1000);

  // Turn on LED 6, 7, 8, 9, 10
  bar.setBits(0b000001111100000); // atau 0x3E0
  delay(1000);
}