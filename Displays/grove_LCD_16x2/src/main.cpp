#include <Arduino.h>
#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int COLOR_R = 255;
const int COLOR_G = 0;
const int COLOR_B = 0;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setRGB(COLOR_R, COLOR_G, COLOR_B);

  lcd.print("hello world");

  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
  delay(100);
}