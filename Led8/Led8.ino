const int Rouge=12; //declaration des pins en les nommant avec une affectations de leur numero de pin
#define Vert 8      //    "        "    "  comme une bibliotheque(avec hashtag et sans ;)
void setup() {
  // put your setup code here, to run once:

  pinMode(Vert,OUTPUT);  //pour declarer les pins qu'on veut utilser et mieux ds setup pour eviter les repetitions
  pinMode(Rouge,OUTPUT);
  pinMode(10,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  
  digitalWrite(Vert,HIGH);
  digitalWrite(Rouge,LOW);
  //digitalWrite(10,LOW);
  delay(500);
  digitalWrite(Rouge,HIGH);
  digitalWrite(Vert,LOW);
  //digitalWrite(10,LOW);
  delay(500);
  /*digitalWrite(10,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(Rouge,LOW);
  delay(500);*/

}
