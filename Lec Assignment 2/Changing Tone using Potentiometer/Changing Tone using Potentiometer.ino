void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);

}

void loop()
{
  int sensorValue = analogRead(A0);
  tone(8, sensorValue);
}