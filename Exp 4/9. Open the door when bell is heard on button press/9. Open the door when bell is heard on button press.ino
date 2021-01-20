#include<Servo.h>
int buttonState = 0;
Servo myservo;
int val;
void setup()
{
  pinMode(2, INPUT);
  pinMode(10, OUTPUT);
  myservo.attach(8);
}

void loop()
{
  int buttonState = digitalRead(2);
  if (buttonState == HIGH) {
    tone(10,250);
    val=90;// door opening at 90 degree
    delay(10);
    noTone(10);
  } 
  else {
    val=0;
  }
  myservo.write(val);
  delay(10); 
}