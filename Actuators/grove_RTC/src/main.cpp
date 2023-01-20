#include <Arduino.h>
#include <Wire.h>
#include "DS1307.h"

DS1307 clock; // define a object of DS1307 class

void setup() {
  Serial.begin(9600);
  clock.begin();
  clock.fillByYMD(2013, 1, 19); // jan 19 2013
  clock.fillByHMS(15, 28, 30); // 15:28 30
  clock.fillDayOfWeek(SAT); // saturday
  clock.setTime(); // write time to RTC chip
}

void printTime() {
  clock.getTime();
  Serial.print(clock.hour, DEC);
  Serial.print(":");
  Serial.print(clock.minute, DEC);
  Serial.print(":");
  Serial.print(clock.second, DEC);
  Serial.print(" ");
  Serial.print(clock.month, DEC);
  Serial.print("/");
  Serial.print(clock.dayOfMonth, DEC);
  Serial.print("/");
  Serial.print(clock.year + 2000, DEC);
  Serial.print(" ");
  Serial.print(clock.dayOfMonth);
  Serial.print("*");

  switch (clock.dayOfWeek) {
  case MON:
    Serial.print("MON");
    break;
  case TUE:
    Serial.print("TUE");
    break;
  case WED:
    Serial.print("WED");
    break;
  case THU:
    Serial.print("THU");
    break;
  case FRI:
    Serial.print("FRI");
    break;
  case SAT:
    Serial.print("SAT");
    break;
  case SUN:
    Serial.print("SUN");
    break;
  }
}

void loop() {
  printTime();
}