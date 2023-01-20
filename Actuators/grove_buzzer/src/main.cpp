#include <Arduino.h>

#define BUZZER 6  // makro definition of buzzer pin | penamaan konstanta ALL CAPS CASE

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  digitalWrite(BUZZER, HIGH);
  delay(1000);
  digitalWrite(BUZZER, LOW);
  delay(1000);
}