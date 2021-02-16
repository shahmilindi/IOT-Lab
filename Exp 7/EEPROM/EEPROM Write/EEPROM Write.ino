#include<EEPROM.h>
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Using write operation in EEPROM");
  for (int i=0; i<EEPROM.length(); i++){
  	EEPROM.write(i, 1);
  }
  digitalWrite(13, HIGH);
  Serial.println("the write operation is successful");
}

void loop()
{
  
}
