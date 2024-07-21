#include <hd44780.h>
#include <Wire.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd(0x20,I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH);
int pot;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  lcd.begin(16,2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Hello world");
  lcd.setCursor(0,1);
  lcd.print("I'm Smith");
  delay(2000);
  lcd.clear();
  for(int i=0;i<15;i++)
  {
    lcd.setCursor(i,1);
    lcd.print("I'm Smith");
    delay(500);
    lcd.clear();
  }
  /*pot=analogRead(A1);
  if(pot>150)
  {
    digitalWrite(2,HIGH);
    }
    else
    {
      digitalWrite(2,LOW);
      }
  lcd.setCursor(0,0);
  lcd.print("POT : ");
  lcd.setCursor(0,1);
  //lcd.print(analogRead(A1));
  lcd.print(pot);
  delay(500);
  lcd.clear();*/

}
