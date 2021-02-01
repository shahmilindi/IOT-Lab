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
void two()
{
  digitalWrite(f, 1);
  digitalWrite(g, 0);
  digitalWrite(e, 0);
  digitalWrite(d, 0);
  digitalWrite(c, 1);
  digitalWrite(b, 0);
  digitalWrite(a, 0); 
}
void three()
{
  digitalWrite(f, 1);
  digitalWrite(g, 0);
  digitalWrite(e, 1);
  digitalWrite(d, 0);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 0); 
}
void four()
{
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 1);
  digitalWrite(d, 1);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 1); 
}
void five()
{
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 1);
  digitalWrite(d, 0);
  digitalWrite(c, 0);
  digitalWrite(b, 1);
  digitalWrite(a, 0); 
}
void six()
{
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 0);
  digitalWrite(d, 0);
  digitalWrite(c, 0);
  digitalWrite(b, 1);
  digitalWrite(a, 0); 
}
void seven()
{
  digitalWrite(f, 1);
  digitalWrite(g, 1);
  digitalWrite(e, 1);
  digitalWrite(d, 1);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 0); 
}
void eight()
{
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 0);
  digitalWrite(d, 0);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 0); 
}
void nine()
{
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 1);
  digitalWrite(d, 0);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 0); 
}


void loop()
{
  zero();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);
  three();
  delay(1000);
  four();
  delay(1000);
  five();
  delay(1000);
  six();
  delay(1000);
  seven();
  delay(1000);
  eight();
  delay(1000);
  nine();
  delay(1000);
  
}