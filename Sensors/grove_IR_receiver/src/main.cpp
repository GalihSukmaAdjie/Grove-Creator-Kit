#include <Arduino.h>
#include <IRSendRev.h>

#define BIT_LEN       0
#define BIT_START_H   1
#define BIT_START_L   2
#define BIT_DATA_H    3
#define BIT_DATA_L    4
#define BIT_DATA_LEN  5
#define BIT_DATA     6

const int PIN_RECV = 2;

void setup() {
  Serial.begin(9600);
  IR.Init(PIN_RECV);
  Serial.println("Init Over");
}

unsigned char dta[20];

void loop() {
  if (IR.IsDta()) {
    IR.Recv(dta);
    Serial.println("+------------------------------------+");
    Serial.print("LEN = ");
    Serial.println(dta[BIT_LEN]);
    Serial.print("START_H : ");
    Serial.print(dta[BIT_START_H]);
    Serial.print("\tSTART_L : ");
    Serial.print(dta[BIT_START_L]);

    Serial.print("DATA_H : ");
    Serial.print(dta[BIT_DATA_H]);
    Serial.print("\tData_L : ");
    Serial.println(dta[BIT_DATA_L]);

    Serial.print("\r\nData_LEN = ");
    Serial.print(dta[BIT_DATA_LEN]);

    Serial.print("DATA: ");
    for (int i = 0; i < dta[BIT_DATA_LEN]; i++) {
      Serial.print("0x");
      Serial.print(dta[i + BIT_DATA], HEX);
      Serial.print("\t");
    }
    Serial.println();
    Serial.print("DATA:")
    for (int i = 0; i < dta[BIT_DATA_LEN]; i++) {
      Serial.print(dta[i + BIT_DATA], DEC);
      Serial.print("\t");
    }
    Serial.println();
    Serial.println("+--------------------------------+\r\n\r\n");
  }
}