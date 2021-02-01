void setup()
{
  pinMode(2, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{
  int read = analogRead(8);
  if(read==0) 
    noTone(2);
  else
     tone(2,440);
  delay(100);
}