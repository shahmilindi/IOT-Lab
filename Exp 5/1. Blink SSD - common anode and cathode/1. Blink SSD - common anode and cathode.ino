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

void loop()
{
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);
  digitalWrite(a, LOW);
  delay(1000); 
}