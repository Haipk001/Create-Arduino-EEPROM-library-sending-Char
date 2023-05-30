#include "MyEEPROM.h"

void setup() {
  Serial.begin(9600);
  int addrOffset = 0;
  
  // Writing
  char writeData[5] = "1,923";
  MyEEPROM myEEPROM;
  ///myEEPROM.writeChartoEEPROM(addrOffset, writeData, sizeof(writeData));

  // Reading
  char *data = myEEPROM.readCharFromEEPROM(addrOffset);
  Serial.print("data read from eeprom: ");
  Serial.println(data);
}


void loop() {}
