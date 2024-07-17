#include <Adafruit_BusIO_Register.h>
#include <Adafruit_I2CDevice.h>
#include <Adafruit_I2CRegister.h>
#include <Adafruit_SPIDevice.h>

#include <Adafruit_MCP23008.h>
Adafruit_MCP23008 seg7;

void setup() {
  // put your setup code here, to run once:
  seg7.begin(0x4);
  seg7.pinMode(0,OUTPUT);
  seg7.pinMode(1,OUTPUT);
  seg7.pinMode(2,OUTPUT);
  seg7.pinMode(3,OUTPUT);
  seg7.pinMode(4,OUTPUT);
  seg7.pinMode(5,OUTPUT);
  seg7.pinMode(6,OUTPUT);
  seg7.pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  seg7.digitalWrite(0,HIGH);
  seg7.digitalWrite(1,HIGH);
  seg7.digitalWrite(2,HIGH);
  seg7.digitalWrite(3,HIGH);
  seg7.digitalWrite(4,HIGH);
  seg7.digitalWrite(5,HIGH);
  seg7.digitalWrite(6,LOW);
  seg7.digitalWrite(7,LOW);
  // number 0
  delay(500);
    seg7.digitalWrite(0,LOW);
  seg7.digitalWrite(1,HIGH);
  seg7.digitalWrite(2,HIGH);
  seg7.digitalWrite(3,LOW);
  seg7.digitalWrite(4,LOW);
  seg7.digitalWrite(5,LOW);
  seg7.digitalWrite(6,LOW);
  seg7.digitalWrite(7,LOW);
  delay(500);
  //number 1
      seg7.digitalWrite(0,HIGH);
  seg7.digitalWrite(1,HIGH);
  seg7.digitalWrite(2,LOW);
  seg7.digitalWrite(3,HIGH);
  seg7.digitalWrite(4,HIGH);
  seg7.digitalWrite(5,LOW);
  seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(7,LOW);
  delay(500);
  // number 2
    seg7.digitalWrite(0,HIGH);
  seg7.digitalWrite(1,HIGH);
  seg7.digitalWrite(2,HIGH);
  seg7.digitalWrite(3,HIGH);
  seg7.digitalWrite(4,LOW);
  seg7.digitalWrite(5,LOW);
  seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(7,LOW);
  // number 3
  delay(500);
      seg7.digitalWrite(0,LOW);
  seg7.digitalWrite(1,HIGH);
  seg7.digitalWrite(2,HIGH);
  seg7.digitalWrite(3,LOW);
  seg7.digitalWrite(4,LOW);
  seg7.digitalWrite(5,HIGH);
  seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(7,LOW);
  delay(500);
  //number 4
      seg7.digitalWrite(0,HIGH);
  seg7.digitalWrite(1,LOW);
  seg7.digitalWrite(2,HIGH);
  seg7.digitalWrite(3,HIGH);
  seg7.digitalWrite(4,LOW);
  seg7.digitalWrite(5,HIGH);
  seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(7,LOW);
  delay(500);
  // number 5
      seg7.digitalWrite(0,HIGH);
  seg7.digitalWrite(1,LOW);
  seg7.digitalWrite(2,HIGH);
  seg7.digitalWrite(3,HIGH);
  seg7.digitalWrite(4,HIGH);
  seg7.digitalWrite(5,HIGH);
  seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(7,LOW);
  delay(500);
  // number 6
      seg7.digitalWrite(0,HIGH);
  seg7.digitalWrite(1,HIGH);
  seg7.digitalWrite(2,HIGH);
  seg7.digitalWrite(3,LOW);
  seg7.digitalWrite(4,LOW);
  seg7.digitalWrite(5,LOW);
  seg7.digitalWrite(6,LOW);
  seg7.digitalWrite(7,LOW);
  delay(500);
  // number 7
      seg7.digitalWrite(0,HIGH);
  seg7.digitalWrite(1,HIGH);
  seg7.digitalWrite(2,HIGH);
  seg7.digitalWrite(3,HIGH);
  seg7.digitalWrite(4,HIGH);
  seg7.digitalWrite(5,HIGH);
  seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(7,LOW);
  delay(500);
  // number 8
      seg7.digitalWrite(0,HIGH);
  seg7.digitalWrite(1,HIGH);
  seg7.digitalWrite(2,HIGH);
  seg7.digitalWrite(3,HIGH);
  seg7.digitalWrite(4,LOW);
  seg7.digitalWrite(5,HIGH);
  seg7.digitalWrite(6,HIGH);
  seg7.digitalWrite(7,LOW);
  delay(500);
  // number 9

}
