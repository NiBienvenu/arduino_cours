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
Adafruit_SSD1306 ecran(NULL);
//hd44780_I2Cexp lcd(0x20,I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH); 


void setup() {
  // put your setup code here, to run once:
  ecran.begin(SSD1306_SWITCHCAPVCC,0x3C,false);
  ecran.clearDisplay();

}

void loop() {
  // put your main code here, to run repeatedly:
  ecran.setCursor(0,0);
  ecran.setTextSize(1);
  ecran.setTextColor(WHITE);
  ecran.print("Hello Word");
  ecran.display();
  
  

}
