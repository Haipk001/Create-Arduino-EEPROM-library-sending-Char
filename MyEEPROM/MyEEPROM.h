/*
* Write and Read data to/from Arduino memory using EEPROM Lib
* Design IoT System - Geotech-Science Co., Ltd,
* Author: Phan Khac Hai (khachai.ts@gmail.com)
* ------------------------------------------------------------------------------
* Notes:
* This class is to refer to the works of robottic.
* https://roboticsbackend.com/arduino-write-string-in-eeprom/
* 
*/

#ifndef MYEEPROM_H
#define MYEEPROM_H
#include <Arduino.h>

class MyEEPROM
{
	public:
	MyEEPROM();
		void writeChartoEEPROM(int addrOffset, char message[], const uint8_t size);
		char *readCharFromEEPROM(int addrOffset);
};
#endif
