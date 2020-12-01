void setup()
{
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  for(int i=4;i<=12;i+=2)
  {
   digitalWrite(i,HIGH);
   delay(500);
   digitalWrite(i,LOW);
  }
  for(int i=12;i>=4;i-=2)
  {
   digitalWrite(i,HIGH);
   delay(500);
   digitalWrite(i,LOW);
  }
}
