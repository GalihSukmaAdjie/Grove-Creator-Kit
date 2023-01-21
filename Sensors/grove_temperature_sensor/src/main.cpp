#include <Arduino.h>
#include <math.h>

int a;
float Temperature;
int b = 3975; // value of thermistor
float Resistance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  a = analogRead(0);
  Resistance = (float)(1023-a)*10000/a; // get resistance of sensor
  Temperature = 1/(log10(Resistance/10000)/b+1/298.15)-273.15;
  delay(1000);
  Serial.print("Current Temperature"); 
  Serial.println(Temperature);
}