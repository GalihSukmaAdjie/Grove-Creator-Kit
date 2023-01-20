#include <Arduino.h>

const int BUTTON_PIN = 2;
const int LED_PIN = 3;

int ButtonState = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ButtonState = digitalRead(BUTTON_PIN);

  if (ButtonState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }
}