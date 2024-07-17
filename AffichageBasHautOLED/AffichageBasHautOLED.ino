#include <Adafruit_BusIO_Register.h>
#include <Adafruit_I2CDevice.h>
#include <Adafruit_I2CRegister.h>
#include <Adafruit_SPIDevice.h>

#include <Adafruit_GFX.h>
#include <Adafruit_GrayOLED.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 bashaut(NULL);
#define haut 6
#define bas 5
int down=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(6,INPUT);
  pinMode(5,INPUT);
  bashaut.begin(SSD1306_SWITCHCAPVCC,0x3C,false);
  bashaut.clearDisplay();
  Serial.begin(9600);
  bashaut.setTextSize(1);
  bashaut.setTextColor(WHITE);
  bashaut.setCursor(0,0);
  bashaut.print("Hello World");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  /*bashaut.setTextSize(1);
  bashaut.setTextColor(WHITE);
  bashaut.setCursor(0,0);
  bashaut.print("Hello World");*/
  int i=0;
  if(digitalRead(bas)==1)
  {
     i=i+8;
   bashaut.clearDisplay();  
   bashaut.setCursor(0,i);
   bashaut.print("Hello World");
   bashaut.display();
   Serial.println(down);
   //delay(500);
 
  }
  else
    bashaut.clearDisplay();  
    bashaut.setCursor(0,i);
    bashaut.print("Hello World");
    bashaut.display();
    Serial.println(down);
    delay(500);
  
}
