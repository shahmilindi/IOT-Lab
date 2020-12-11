void setup()
{
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop()
{
  for (int i=0; i<255; i++){
    analogWrite(2,i);
    analogWrite(8,255-i);
    delay(10);
  }
  for (int i=255; i>0; i--){
    analogWrite(2,i);
    analogWrite(8,255-i);
    delay(10);
  }
  
}