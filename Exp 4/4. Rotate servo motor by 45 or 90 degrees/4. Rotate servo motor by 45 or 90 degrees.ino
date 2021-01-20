#include <Servo.h>
int pos = 0 ;
Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);

}

void loop()
{
  servo_9.write(45);
  delay(500);
  servo_9.write(90);
  delay(500);
}