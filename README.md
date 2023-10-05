# Arduino EEPROM Library for Storing and Retrieving Character Arrays

This Arduino project provides a custom EEPROM library that allows you to easily store and retrieve character arrays (strings) in the EEPROM memory of your Arduino board. The library simplifies the process of reading and writing character arrays, making it convenient for various applications.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)

## Introduction

The EEPROM (Electrically Erasable Programmable Read-Only Memory) of an Arduino board is a non-volatile memory that can be used to store data even when the board is powered off. This project introduces a custom EEPROM library that streamlines the process of working with character arrays in the EEPROM.

## Features

- **Write Character Arrays:** Easily write character arrays (strings) into the EEPROM memory.
- **Read Character Arrays:** Retrieve character arrays from the EEPROM memory.
- **Efficient Memory Usage:** The library efficiently utilizes EEPROM memory, making it suitable for low-storage Arduino boards.
- **User-Friendly API:** Simple and intuitive functions for reading and writing data.
- **Well-Documented:** Clear documentation and example code for quick integration.

## Installation

1. Download the "MyEEPROM" library folder from this repository.
2. Install the library in your Arduino IDE by navigating to `Sketch -> Include Library -> Add .ZIP Library` and selecting the downloaded folder.

## Usage

To use the "MyEEPROM" library in your Arduino sketch, include the library at the beginning of your code:

```cpp
#include <MyEEPROM.h>
```

### Writing Data

To write a character array to the EEPROM, create an instance of the `MyEEPROM` class, and then use the `writeChartoEEPROM` function. Provide the EEPROM address offset, the character array to write, and its size as parameters.

```cpp
MyEEPROM myEEPROM;
char writeData[] = "Your data here";
int addrOffset = 0;
myEEPROM.writeChartoEEPROM(addrOffset, writeData, sizeof(writeData));
```

### Reading Data

To read a character array from the EEPROM, use the `readCharFromEEPROM` function, providing the EEPROM address offset as a parameter. The function returns a dynamically allocated character array containing the data.

```cpp
char *data = myEEPROM.readCharFromEEPROM(addrOffset);
```

## Example

Check out the provided example sketch in the "MyEEPROM.ino" folder to see how to use the library in a practical application.

## Contributing

Contributions to this project are welcome! If you find issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.
