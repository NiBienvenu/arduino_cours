const int Vert1=9, Vert2=3, Vert3=6;
const int Jaune1=10, Jaune2=4, Jaune3=7;
const int Rouge1=11, Rouge2=5, Rouge3=8;
void setup() {
  // put your setup code here, to run once:

  pinMode(Vert1,OUTPUT);
  pinMode(Jaune1,OUTPUT);
  pinMode(Rouge1,OUTPUT);
  pinMode(Vert2,OUTPUT);
  pinMode(Jaune2,OUTPUT);
  pinMode(Rouge2,OUTPUT);
  pinMode(Vert3,OUTPUT);
  pinMode(Jaune3,OUTPUT);
  pinMode(Rouge3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(Vert1,HIGH);
  digitalWrite(Jaune1,LOW);
  digitalWrite(Rouge1,LOW);
  digitalWrite(Vert2,LOW);
  digitalWrite(Jaune2,LOW);
  digitalWrite(Rouge2,HIGH);
  digitalWrite(Vert3,LOW);
  digitalWrite(Jaune3,LOW);
  digitalWrite(Rouge3,HIGH);
  delay(5000);
  digitalWrite(Vert1,LOW);
  digitalWrite(Jaune1,HIGH);
  digitalWrite(Rouge1,LOW);
  digitalWrite(Vert2,LOW);
  digitalWrite(Jaune2,LOW);
  digitalWrite(Rouge2,HIGH);
  digitalWrite(Vert3,LOW);
  digitalWrite(Jaune3,LOW);
  digitalWrite(Rouge3,HIGH);
  delay(3000);
  digitalWrite(Vert1,LOW);
  digitalWrite(Jaune1,LOW);
  digitalWrite(Rouge1,HIGH);
  digitalWrite(Vert2,HIGH);
  digitalWrite(Jaune2,LOW);
  digitalWrite(Rouge2,LOW);
  digitalWrite(Vert3,LOW);
  digitalWrite(Jaune3,LOW);
  digitalWrite(Rouge3,HIGH);
  delay(5000);
  digitalWrite(Vert1,LOW);
  digitalWrite(Jaune1,LOW);
  digitalWrite(Rouge1,HIGH);
  digitalWrite(Vert2,LOW);
  digitalWrite(Jaune2,HIGH);
  digitalWrite(Rouge2,LOW);
  digitalWrite(Vert3,LOW);
  digitalWrite(Jaune3,LOW);
  digitalWrite(Rouge3,HIGH);
  delay(5000);
  digitalWrite(Vert1,LOW);
  digitalWrite(Jaune1,LOW);
  digitalWrite(Rouge1,HIGH);
  digitalWrite(Vert2,LOW);
  digitalWrite(Jaune2,LOW);
  digitalWrite(Rouge2,HIGH);
  digitalWrite(Vert3,HIGH);
  digitalWrite(Jaune3,LOW);
  digitalWrite(Rouge3,LOW);
  delay(2000);
  digitalWrite(Vert1,LOW);
  digitalWrite(Jaune1,LOW);
  digitalWrite(Rouge1,HIGH);
  digitalWrite(Vert2,LOW);
  digitalWrite(Jaune2,LOW);
  digitalWrite(Rouge2,HIGH);
  digitalWrite(Vert3,LOW);
  digitalWrite(Jaune3,HIGH);
  digitalWrite(Rouge3,LOW);
  delay(5000);
  

}
