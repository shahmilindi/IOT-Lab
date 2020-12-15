
//int buttonState = 0;

void setup()
{
  pinMode(2, INPUT_PULLUP);// usually 1 , push..0   pullup: inverted of input 
  pinMode(13, OUTPUT);

  Serial.begin(9600);

}

void loop()
{
  // read the input pin
  int buttonState = digitalRead(2);
  // print out the state of the button
  digitalWrite(13, buttonState);
  Serial.println(buttonState);
  delay(1000); 
}