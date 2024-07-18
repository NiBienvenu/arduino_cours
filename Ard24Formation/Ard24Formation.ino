int age=22, annee=2023, i=0;;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  //Serial.print("Hello World");
  //Serial.print("Mon Age est ");
  //Serial.print(age);
  /*for(int i=0; i<age;i++)
  {
    Serial.print("L'an:");
    Serial.print(annee);
    Serial.print("Mon Age est ");
    Serial.println(age-i);annee--;
    
    }*/
    
    while(i<age)
    i++;
    Serial.print("L'an:");
    Serial.print(annee);
    Serial.print("Mon Age est ");
    Serial.println(age-i);annee--;

}

void loop() {
  // put your main code here, to run repeatedly:

}
