int f = 13;
int g = 12;
int e = 11;
int d = 10;
int c = 9;
int b = 8;
int a = 7;


void setup()
{
  for(int i=13; i>=7;i--)
  {
     pinMode(i,OUTPUT);
  }
}

void loop()
{
  for(int i=13; i>=7; i--)
  {
     digitalWrite(i,HIGH);
     delay(500);
  }
  
  for(int i=7; i<=13; i++)
  {
     digitalWrite(i,LOW);
     delay(500);
  } 
}