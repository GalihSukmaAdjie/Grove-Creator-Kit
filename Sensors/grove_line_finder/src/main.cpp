#include <Arduino.h>

#define SIGNAL_PIN 3

void setup() {
  pinMode(SIGNAL_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(SIGNAL_PIN);
  Serial.println(val);
}