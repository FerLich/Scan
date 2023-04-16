#include <Arduino.h>
#include "I2CScanner.h"
#include <Wire.h>
I2CScanner scanner;


void setup() 
{	
	//uncomment the next line if you use custom sda and scl pins for example with ESP8266-01 (sda = 4, scl = 5)
	//Wire.begin(SDA_PIN, SCL_PIN);
	
	Serial.begin(115200);
	while (!Serial) {};

	scanner.Init();
}

void loop() 
{
	scanner.Scan();
	delay(5000);
}