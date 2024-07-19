#include <hd44780.h>
#include <Wire.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd(0x20,I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH);
int capteur;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
  capteur=analogRead(A0);
  lcd.setCursor(0,0);
  lcd.print("Cap : ");
  lcd.setCursor(0,1);
  //lcd.print(analogRead(A1));
  lcd.print(capteur);
  delay(500);
  lcd.clear();
  //pot=analogRead(A1);
  if(capteur>50)
  {
    digitalWrite(2,HIGH);
    }
    else
    {
      digitalWrite(2,LOW);
      }

}
