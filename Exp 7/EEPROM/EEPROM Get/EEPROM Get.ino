#include<EEPROM.h>
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Using Write operation in EEPROM");
  for (int i=0; i<EEPROM.length(); i++){
    EEPROM.write(i, 0);}

  digitalWrite(13, HIGH);
  
  int myint = 1;
  EEPROM.put(0,myint);
  Serial.println("The Put operation is successful");
  Serial.println("Getting the value which we had put");
  int get = EEPROM.get(0,myint);
  Serial.println(get);
  Serial.println("The Get operation is successful");
}

void loop()
{
  
}
