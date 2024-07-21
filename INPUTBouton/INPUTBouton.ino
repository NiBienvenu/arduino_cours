int i=0;
void setup() {
  // put your setup code here, to run once:

  pinMode(4,INPUT);
  pinMode(5,INPUT);
   pinMode(6,INPUT);
    pinMode(7,INPUT);
     pinMode(8,INPUT);
     pinMode(13,OUTPUT);

   Serial.begin(9600);  

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(4)==HIGH)
      
   {
     i++;
     Serial.println(i);
     delay(500);
    if(i%2==1)
    {
    digitalWrite(13,HIGH);
    }
     else
       digitalWrite(13,LOW);
   }
   /*else
    digitalWrite(13,LOW);*/
    

   
    
  

}
