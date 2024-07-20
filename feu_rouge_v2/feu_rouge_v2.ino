const int GreenF1=4;
const int RedF1=2;
const int YellowF1=3;

const int GreenF2=8;
const int RedF2=6;
const int YellowF2=7;


const int GreenF3=10;
const int RedF3=12;
const int YellowF3=11;


void setup() {
  // put your setup code here, to run once:
  pinMode(GreenF1,OUTPUT);//to define the mode of the pin 13 as OUTPUT
  pinMode(RedF1,OUTPUT);
  pinMode(YellowF1,OUTPUT);

    pinMode(GreenF2,OUTPUT);//to define the mode of the pin 13 as OUTPUT
  pinMode(RedF2,OUTPUT);
  pinMode(YellowF2,OUTPUT);

    pinMode(GreenF3,OUTPUT);//to define the mode of the pin 13 as OUTPUT
  pinMode(RedF3,OUTPUT);
  pinMode(YellowF3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(GreenF1,HIGH);
digitalWrite(RedF1,LOW);
digitalWrite(YellowF1,LOW);
digitalWrite(GreenF2,LOW);
digitalWrite(RedF2,HIGH);
digitalWrite(YellowF2,LOW);
digitalWrite(GreenF3,LOW);
digitalWrite(RedF3,HIGH);
digitalWrite(YellowF3,LOW);
delay(4000);
digitalWrite(GreenF1,HIGH);
digitalWrite(RedF1,LOW);
digitalWrite(YellowF1,LOW);
digitalWrite(GreenF2,LOW);
digitalWrite(RedF2,LOW);
digitalWrite(YellowF2,HIGH);
digitalWrite(GreenF3,LOW);
digitalWrite(RedF3,HIGH);
digitalWrite(YellowF3,LOW);
delay(1000);
digitalWrite(GreenF1,LOW);
digitalWrite(RedF1,HIGH);
digitalWrite(YellowF1,LOW);
digitalWrite(GreenF2,HIGH);
digitalWrite(RedF2,LOW);
digitalWrite(YellowF2,LOW);
digitalWrite(GreenF3,LOW);
digitalWrite(RedF3,HIGH);
digitalWrite(YellowF3,LOW);
delay(4000);
digitalWrite(GreenF1,LOW);
digitalWrite(RedF1,HIGH);
digitalWrite(YellowF1,LOW);
digitalWrite(GreenF2,HIGH);
digitalWrite(RedF2,LOW);
digitalWrite(YellowF2,LOW);
digitalWrite(GreenF3,LOW);
digitalWrite(RedF3,LOW);
digitalWrite(YellowF3,HIGH);
delay(1000);
digitalWrite(GreenF1,LOW);
digitalWrite(RedF1,HIGH);
digitalWrite(YellowF1,LOW);
digitalWrite(GreenF2,LOW);
digitalWrite(RedF2,HIGH);
digitalWrite(YellowF2,LOW);
digitalWrite(GreenF3,HIGH);
digitalWrite(RedF3,LOW);
digitalWrite(YellowF3,LOW);
delay(4000);
digitalWrite(GreenF1,LOW);
digitalWrite(RedF1,LOW);
digitalWrite(YellowF1,HIGH);
digitalWrite(GreenF2,LOW);
digitalWrite(RedF2,HIGH);
digitalWrite(YellowF2,LOW);
digitalWrite(GreenF3,HIGH);
digitalWrite(RedF3,LOW);
digitalWrite(YellowF3,LOW);
delay(1000);

}
