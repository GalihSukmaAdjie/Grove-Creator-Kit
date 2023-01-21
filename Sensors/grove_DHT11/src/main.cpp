#include <Arduino.h>
#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

// pin 1 to 5v
// pin 2 to DHTPIN
// pin 4 to GND
// 10K resistor 5pin 1 and 2
DHT dht (DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT test");

  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // cek apakah number atau bukan
  if (isnan(h) || isnan(t)) {
    Serial.println("failed  to read");
  }
  else {
    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print("% \t");
    Serial.print("Temperature");
    Serial.print(t);
    Serial.println(" *C");
  }
}