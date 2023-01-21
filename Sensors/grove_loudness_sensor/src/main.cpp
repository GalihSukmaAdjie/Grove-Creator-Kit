#include <Arduino.h>

int Loudness;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Loudness = analogRead(0);
  Serial.println(Loudness);
  delay(200);
}