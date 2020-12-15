/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the
  result to the serial monitor

  This example code is in the public domain.
*/

int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);

}

void loop()
{
  // read the input pin
  buttonState = digitalRead(2);
  if(buttonState == 1)
  {
    tone(8,440);
    delay(500);
    noTone(8);
  }
}