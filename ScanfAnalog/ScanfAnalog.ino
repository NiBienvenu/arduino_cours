const int Rouge=9;
const int Vert=10;
const int Bleu=11; 
char hace="H";
void setup() {
  // put your setup code here, to run once:
  pinMode(Rouge,OUTPUT);
  pinMode(Vert,OUTPUT);
  pinMode(Bleu,OUTPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    hace=Serial.read();
    
    Serial.println(hace);
  }
  
  if(hace=='H' || hace=='h')
  {
     //hace=Serial.read();
    digitalWrite(Rouge,HIGH);
    //delay(5000);
    }
     else if(hace=='j' || hace=='J')
       digitalWrite(Rouge,LOW);
       if(hace=='H' || hace=='h')
  {
     //hace=Serial.read();
    digitalWrite(Rouge,HIGH);
    digitalWrite(Vert,LOW);
    digitalWrite(Bleu,LOW);
    delay(5000);
    }
     else if(hace=='j' || hace=='J')
       {
        digitalWrite(Rouge,LOW);
        digitalWrite(Vert,HIGH);
        digitalWrite(Bleu,LOW);
        delay(5000);
       }
       
        else if(hace=='a' || hace=='A')
        digitalWrite(Bleu,HIGH);
        digitalWrite(Vert,LOW);
        digitalWrite(Rouge,LOW);

   /* digitalWrite(Rouge,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(Vert,LOW);
    digitalWrite(Bleu,LOW);
    delay(500);
    digitalWrite(Rouge,LOW);
    digitalWrite(2,LOW);
    digitalWrite(Vert,HIGH);
    digitalWrite(Bleu,LOW);
    delay(1000);
    digitalWrite(Bleu,HIGH);
    digitalWrite(Vert,LOW);
    digitalWrite(Rouge,LOW);
    delay(1000);*/
        
       
}
