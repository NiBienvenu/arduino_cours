#include <hd44780.h>
#include <Wire.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd(0x20,I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH);
#define Red 9
#define Green 10
#define Blue 11
float t;
void setup() { 
  // put your setup code here, to run once:
  pinMode(Red,OUTPUT);
  pinMode(Green,OUTPUT);
  pinMode(Blue,OUTPUT);
  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
  t=analogRead(A2);
  lcd.setCursor(0,0);
  lcd.print("Temp : ");
  lcd.setCursor(0,1);
  //lcd.print(analogRead(A1));
  lcd.print(t*0.125-22.0);
  delay(500);
  lcd.clear();
  if (t<19.40)
  {
    digitalWrite(Red,HIGH);
    digitalWrite(Green,LOW);
      digitalWrite(Blue,LOW);
      delay(1000);
    }
    else if(t>19.40)
    {
      digitalWrite(Green,HIGH);
      digitalWrite(Red,LOW);
      digitalWrite(Blue,LOW);
      delay(1000);
      }
      else
        digitalWrite(Blue,HIGH);
        digitalWrite(Red,LOW);
        digitalWrite(Green,LOW);
        delay(1000);

        
  


}
