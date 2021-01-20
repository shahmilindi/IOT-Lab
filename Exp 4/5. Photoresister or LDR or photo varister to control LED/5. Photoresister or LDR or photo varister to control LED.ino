void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorReading = analogRead(A0);
  Serial.println(sensorReading);
  int modifiedSensorReading = map(sensorReading,26,923,0,256);
  analogWrite(9,modifiedSensorReading);
  delay(10); 
}