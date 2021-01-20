void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorReading = analogRead(A0);
  Serial.println(sensorReading);
  delay(10); 
}