#include <Arduino.h>

const int SWITCH_PIN = 2;
const int LED_PIN = 6;

int SwitchState = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(SWITCH_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  SwitchState = digitalRead(SWITCH_PIN);

  if (SwitchState ==HIGH) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("switch HIGH");
  }
  else{
    digitalWrite(LED_PIN, LOW);
    Serial.println("switch LOW");
  }
}