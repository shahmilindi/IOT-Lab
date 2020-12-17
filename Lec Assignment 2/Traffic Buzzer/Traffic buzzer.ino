void setup()
{
  pinMode(11, OUTPUT);//red 
  pinMode(10, OUTPUT);//yellow
  pinMode(9, OUTPUT); //green
  pinMode(8, OUTPUT); //buzzer
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(11,LOW);
  for (int i=0; i<5; i++){
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(500);
  }
  digitalWrite(9,HIGH);
  delay(3000);
  tone(8,440);
  delay(2000);
  noTone(8);
  digitalWrite(9,LOW);
}