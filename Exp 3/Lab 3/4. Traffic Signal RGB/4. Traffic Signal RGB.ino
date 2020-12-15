int pos = 0;

void setup()
{
  pinMode(9, OUTPUT);// red
  pinMode(6, OUTPUT);// green
  pinMode(5, OUTPUT);// blue
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);

  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);

  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(5, HIGH);
  delay(500);

  
}