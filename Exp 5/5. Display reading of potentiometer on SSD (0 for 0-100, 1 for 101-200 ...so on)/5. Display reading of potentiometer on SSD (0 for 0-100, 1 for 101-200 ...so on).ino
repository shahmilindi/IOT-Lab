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
  pinMode(A0, INPUT);
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
  int read = analogRead(A0);
  if (0<=read && read<=100)
  {
     zero();
  }
  
  else if (101<=read && read<=200)
  {
     one();
  }
  
  else if (201<=read && read<=300)
  {
     two();
  }
  else if (301<=read && read<=400)
  {
     three();
  }
  
  else if (401<=read && read<=500)
  {
     four();
  }
  else if (501<=read && read<=600)
  {
     five();
  }
  
  else if (601<=read && read<=700)
  {
     six();
  }
  else if (701<=read && read<=800)
  {
     seven();
  }
  
  else if (801<=read && read<=900)
  {
     eight();
  }
  else if (901<=read && read<=1023)
  {
     nine();
  }
  
  delay(1000);
}