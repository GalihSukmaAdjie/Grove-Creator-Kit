#include <Arduino.h>

// makro definition | penamaan ALL CAPS CASE
#define ROTARY_ANGLE_SENSOR A0
#define LED 3
#define ADC_REF 5

#define GROVE_VCC 5
#define FULL_ANGLE 300

void setup() {
  Serial.begin(9600);
  pinMode(ROTARY_ANGLE_SENSOR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  float Voltage; // penamaan menggunakan PascalCase
  int SensorValue = analogRead(ROTARY_ANGLE_SENSOR);
  Voltage = (float)SensorValue*ADC_REF /1023;
  float Degrees = (Voltage*FULL_ANGLE)/GROVE_VCC;
  Serial.println("Sudut antara tanda dan posisi start");
  Serial.println("degrees");

  int Brightness;
  Brightness = map(Degrees, 0, FULL_ANGLE, 0, 255);
  analogWrite(LED,Brightness);
  delay(500);
}