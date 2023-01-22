#include <Arduino.h>

#define HALL_SENSOR 2
#define LED 4

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(HALL_SENSOR, INPUT);
}

void loop() {
  if (HALL_SENSOR == 1)
  {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}