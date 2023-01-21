#include <Arduino.h>

const int PIN_ADC = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  long sum = 0;
  for (int i = 0; i < 32; i++)
  {
    sum += analogRead(PIN_ADC);
  }

  sum >>= 5;

  Serial.println(sum);
  delay(10);
}