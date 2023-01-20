#include <Arduino.h>

#define SPEAKER 3 // makro definition of speaker pin | penamaan konstanta ALL CAPS CASE

int BassTab [] = {1911,1702,1516,1431,1275,1136,1012}; // bass array 1-7 | penamaan variabel Pascal Case

void pinInit() {
  pinMode(SPEAKER, OUTPUT);
  delay(500);
}

void setup() {
  pinInit(); // class pin initialization | penamaan class Camel Case
}

void sound(uint8_t note_index){
  // note_index menggunakan snake_case
  for(int i=0; i<100;i++) {
    digitalWrite(SPEAKER,HIGH); 
    delayMicroseconds(BassTab[note_index]);
    digitalWrite(SPEAKER,LOW);
    delayMicroseconds(BassTab[note_index]);
  }
}

void loop() {
  for (int note_index=0;note_index<7;note_index++)
  {
    sound(note_index);
    delay(500);
  }
  
}