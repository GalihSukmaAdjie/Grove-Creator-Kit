#include <Arduino.h>

int SensorPin = A0;
int SensorValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  SensorValue = analogRead(SensorPin);
  Serial.print("SensorValue= ");
  Serial.println(SensorValue);
  delay(1000);
}