
#include "MyEEPROM.h"
#include <EEPROM.h>
#include <Arduino.h>

	//Check
	MyEEPROM::MyEEPROM()
	{
	}

	//Write a Char Array into EEPROM: The code
	void MyEEPROM::writeChartoEEPROM(int addrOffset, char message[], const uint8_t size)
	{
		EEPROM.write(addrOffset, size);
		for (int i = 0; i < size; i++)
		  {
			    EEPROM.write(addrOffset + 1 + i, message[i]);
		  }
	}

	char *MyEEPROM::readCharFromEEPROM(int addrOffset)
	{
		int newCharLen = EEPROM.read(addrOffset);
		//char data[newCharLen + 1]; //could not return char array
    	char *data = (char *) malloc (newCharLen + 1);

		for (int i = 0; i < newCharLen; i++)
			{
				data[i] = EEPROM.read(addrOffset + 1 + i);
			}
    	data[newCharLen] = '\0';
		return data;
	}

