#include <Arduino.h>

#define FLAME_SENSOR 3
#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(FLAME_SENSOR, INPUT);
  digitalWrite(LED, LOW);
}

boolean IsFlameDetected() {
  if (digitalRead(FLAME_SENSOR)) {
    return false;
  }
  else {
    return true;
  }
}

void loop() {
  if (IsFlameDetected()) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}