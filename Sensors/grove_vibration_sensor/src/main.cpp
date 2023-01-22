#include <Arduino.h>

const int VIBRATION_PIN = 2;
const int BUZZER = 3;

int State = 0;

void setup() {
  pinMode(VIBRATION_PIN, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  State = digitalRead(VIBRATION_PIN);

  if (State == 1) {  
    digitalWrite(BUZZER, LOW);
  }
  else {
    digitalWrite(BUZZER, HIGH);
  }
}