
void setup()
{
  pinMode(4, OUTPUT); // green
  pinMode(5, OUTPUT); //yellow
  pinMode(6, OUTPUT); //red
  pinMode(2, OUTPUT); //buzzer
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(5000);
  digitalWrite(6, LOW);
  tone(2, 440);
  delay(2000);
  noTone(2);
  
  for (int i=0; i<5; i++){
  	digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    delay(500);
  }
  
  digitalWrite(4, HIGH);
  delay(5000);
  digitalWrite(4, LOW);
  tone(2, 440);
  delay(2000);
  noTone(2);

}