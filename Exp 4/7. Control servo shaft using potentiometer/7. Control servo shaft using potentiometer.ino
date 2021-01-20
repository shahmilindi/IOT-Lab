#include<Servo.h>
Servo myservo;
int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  myservo.attach(10);
}

void loop()
{
  delay(100);
  sensorValue = analogRead(A0);
  myservo.write(sensorValue);
  delay(10);
  
}