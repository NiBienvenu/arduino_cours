int absc;
int ord=500;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  absc=analogRead(A3);
  Serial.print("Lumiere : ");
  Serial.print(absc);
  Serial.print(",");
  Serial.print("ordonnée ");
  Serial.println(ord);
  delay(500);

}
