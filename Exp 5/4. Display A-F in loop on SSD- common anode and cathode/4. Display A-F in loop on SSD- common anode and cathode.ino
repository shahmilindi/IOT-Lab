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

void print_A()
{
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 0);
  digitalWrite(d, 1);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 0);
}
void print_B()
{
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 0);
  digitalWrite(d, 0);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 0); 
}
void print_C()
{
  digitalWrite(f, 0);
  digitalWrite(g, 1);
  digitalWrite(e, 0);
  digitalWrite(d, 0);
  digitalWrite(c, 1);
  digitalWrite(b, 1);
  digitalWrite(a, 0); 
}

void print_D()
{
  digitalWrite(f, 0);
  digitalWrite(g, 1);
  digitalWrite(e, 0);
  digitalWrite(d, 0);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 0); 
}
void print_E()
{
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 0);
  digitalWrite(d, 0);
  digitalWrite(c, 1);
  digitalWrite(b, 1);
  digitalWrite(a, 0); 
}
void print_F()
{
  digitalWrite(f, 0);
  digitalWrite(g, 0);
  digitalWrite(e, 0);
  digitalWrite(d, 1);
  digitalWrite(c, 1);
  digitalWrite(b, 1);
  digitalWrite(a, 0); 
}


void loop()
{
  print_A();
  delay(1000);
  print_B();
  delay(1000);
  print_C();
  delay(1000);
  print_D();
  delay(1000);
  print_E();
  delay(1000);
  print_F();
  delay(1000);
}