void setup()
{
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop()
{
  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(12,LOW);
  for(int i = 1; i<=5;i++)
  {
    digitalWrite(8,HIGH);
  	delay(500);
 	digitalWrite(8,LOW);
  	delay(500);
  }
  digitalWrite(2,HIGH);
  delay(5000);
  digitalWrite(2,LOW);
}
