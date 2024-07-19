# define red 9
# define Green 10
# define Blue 11

void setup() {
  // put your setup code here, to run once:

  pinMode(red,OUTPUT);
  pinMode(Green,OUTPUT);
  pinMode(Blue,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(red,255);
  analogWrite(Green,64);
  analogWrite(Blue,0);

}
