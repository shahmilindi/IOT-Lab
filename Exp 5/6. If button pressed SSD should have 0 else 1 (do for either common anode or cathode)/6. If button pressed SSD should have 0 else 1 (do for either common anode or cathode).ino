int f = 13;
int g = 12;
int e = 11;
int d = 10;
int c = 9;
int b = 8;
int a = 7;


void setup()
{
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(2, INPUT);
}

void zero()
{
  digitalWrite(f, 0);
  digitalWrite(g, 1);
  digitalWrite(e, 0);
  digitalWrite(d, 0);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 0);
}
void one()
{
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  digitalWrite(e, 1);
  digitalWrite(d, 1);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 1); 
}

void loop()
{
  int reading = digitalRead(2);
  if(reading == 0)
  {
    zero();
  }
  
 else
 {
    one();
 }
 delay(1000);
  
}