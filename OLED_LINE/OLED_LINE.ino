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
Adafruit_SSD1306 line(NULL);
void setup() {
  // put your setup code here, to run once:
  line.begin(SSD1306_SWITCHCAPVCC,0x3C,false);
  line.clearDisplay();

}

void loop() {
  // put your main code here, to run repeatedly:
  line.setTextSize(1);
  line.setTextColor(WHITE);
  int i=0;
  while(i<=28)
  {
  line.setCursor(0,i);
  line.print("Hello World");
  line.display();
  i=i+8;
  }
  

}
