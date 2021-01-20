#include<Servo.h>
int buttonState = 0;
Servo myservo;
int val;
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  myservo.attach(10);
}

void loop()
{
  int buttonState = digitalRead(2);
  if (buttonState == HIGH) {
    val=180;
  } else {
    val=0;
  }
  myservo.write(val);
  delay(10); 
}