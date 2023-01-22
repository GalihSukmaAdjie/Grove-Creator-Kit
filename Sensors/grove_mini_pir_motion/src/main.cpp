#include <Arduino.h>

#define PIR_MOTION_SENSOR 2

void setup() {
  pinMode(PIR_MOTION_SENSOR, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(PIR_MOTION_SENSOR))
  {
    Serial.println("PIR_MOTION_SENSOR");
  }
  else {
    Serial.println("watch");
  }

  delay(200);
}