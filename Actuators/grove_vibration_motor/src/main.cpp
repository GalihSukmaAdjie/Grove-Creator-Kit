#include <Arduino.h>

int MotorPin = 2; // digital pin 9

void setup() {
  pinMode(MotorPin, OUTPUT);
}

void loop() {
  digitalWrite(MotorPin, HIGH);
  delay(1000);
  digitalWrite(MotorPin, LOW);
  delay(1000);
}