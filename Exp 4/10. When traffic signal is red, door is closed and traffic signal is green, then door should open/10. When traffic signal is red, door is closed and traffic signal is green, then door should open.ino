#include<Servo.h>
Servo myservo;
void setup()
{
  pinMode(6, OUTPUT);// green
  pinMode(12, OUTPUT);// red
  myservo.attach(2);
}

void loop()
{
  digitalWrite(12, HIGH);
  myservo.write(0);
  delay(5000);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(6, HIGH);
  myservo.write(90);
  delay(5000);
  digitalWrite(6, LOW);
  delay(10); 
}