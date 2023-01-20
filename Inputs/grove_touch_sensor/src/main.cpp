#include <Arduino.h>

const int TOUCH_PIN = 2;
const int LED_PIN = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(TOUCH_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int SensorValue = digitalRead(TOUCH_PIN);
  if (SensorValue == 1) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  } 
}