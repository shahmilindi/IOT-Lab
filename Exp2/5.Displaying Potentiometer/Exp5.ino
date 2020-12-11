void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop()
{
  int read = analogRead(A0);
  Serial.println(read);
  delay(10);
}