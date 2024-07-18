int i=0;
# define Rouge 9
# define Vert 10
# define Bleu 11
void setup() {
  // put your setup code here, to run once:
  pinMode(Rouge,OUTPUT);
  pinMode(Vert,OUTPUT);
  pinMode(Bleu,OUTPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(4)==HIGH)
      
   {
     i++;
     Serial.println(i);
     delay(500);
    if(i==1)
    {
    digitalWrite(Rouge,HIGH);
    digitalWrite(Vert,LOW);
    digitalWrite(Bleu,LOW);
    }
      else if(i==2)
      {
       digitalWrite(Vert,HIGH);
       digitalWrite(Rouge,LOW);
       digitalWrite(Bleu,LOW);
      }
       else if(i==3)
        {
        digitalWrite(Vert,LOW);
       digitalWrite(Rouge,LOW);
       digitalWrite(Bleu,HIGH);
       i=0;
        }
       
   }

  

}
