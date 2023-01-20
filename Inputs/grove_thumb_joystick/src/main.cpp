#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int SensorValue1 = analogRead(A0);
  int SensorValue2 = analogRead(A1);

  Serial.print("The x and y values are");
  Serial.print(SensorValue1, DEC);
  Serial.print(",");
  Serial.println(SensorValue2, DEC);
  Serial.println(" ");
  delay(200);
}