void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  tone(2, 512);
  delay(1000); // Wait for 1000 millisecond(s)
  noTone(2);
  delay(1000); // Wait for 1000 millisecond(s)
}