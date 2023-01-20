#include <Arduino.h>

#define LED_MODE 1

const int LED_PIN = 3;
const int BUTTON_PIN = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = digitalRead(BUTTON_PIN);
  if (reading != true) {
    digitalWrite(LED_PIN, HIGH);
  }
  else{
    digitalWrite(LED_PIN, LOW);
  }
}