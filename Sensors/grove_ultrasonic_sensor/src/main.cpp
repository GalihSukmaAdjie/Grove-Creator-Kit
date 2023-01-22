#include <Arduino.h>
#include "Ultrasonic.h"

Ultrasonic Ultrasonic(7);

void setup() {
  Serial.begin(9600);
}

void loop() {
  long RangeInInches;
  long RangeInCentimeters;

  Serial.println("jarak kedepan");
  RangeInInches = Ultrasonic.MeasureInInches();
  Serial.print(RangeInInches);
  Serial.println(" Inch");
  delay(250);

  RangeInCentimeters = Ultrasonic.MeasureInCentimeters();
  Serial.print(RangeInCentimeters);
  Serial.println(" cm");
  delay(250);
}