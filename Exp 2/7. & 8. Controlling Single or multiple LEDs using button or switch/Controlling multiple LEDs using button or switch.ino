int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  buttonState = digitalRead(2);
  Serial.println(buttonState);
  if (buttonState == 1){
    digitalWrite(4,HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(12, HIGH);
    delay(10);
  }
  else {
    digitalWrite(4,LOW);
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);
    delay(10);
  } 
}