#include <Arduino.h>
#include <IRSendRev.h>

#define BIT_LEN       0
#define BIT_START_H   1
#define BIT_START_L   2
#define BIT_DATA_H    3
#define BIT_DATA_L    4
#define BIT_DATA_LEN  5
#define BIT_DATA      6

const int IR_FREQ = 38;

unsigned char DtaSend[20];

void setup() {
  DtaSend[BIT_LEN]      = 11;
  DtaSend[BIT_START_H] = 179;
  DtaSend[BIT_START_L] = 90;
  DtaSend[BIT_DATA_H] = 11;
  DtaSend[BIT_DATA_L] = 33;

  DtaSend[BIT_DATA_LEN] = 6;

  DtaSend[BIT_DATA+0] = 128;
  DtaSend[BIT_DATA+1] = 127;
  DtaSend[BIT_DATA+2] = 192;
  DtaSend[BIT_DATA+3] = 63;
  DtaSend[BIT_DATA+4] = 192;
  DtaSend[BIT_DATA+5] = 63;
}

void loop() {
  IR.Send(DtaSend, 38);
  delay(2000);
}