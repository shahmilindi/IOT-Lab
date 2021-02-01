void setup()
{
  pinMode(2, OUTPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int read = analogRead(8);
  if(read==0) 
    digitalWrite(2,LOW);
  else
     digitalWrite(2,HIGH);
  delay(100);
}