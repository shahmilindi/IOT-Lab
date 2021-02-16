#include<EEPROM.h>
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Using Write operation in EEPROM");
  for (int i=0; i<EEPROM.length(); i++){
    EEPROM.write(i, 0);}
  Serial.println("Using Update operation in EEPROM");
  for (int i=0; i<EEPROM.length(); i++){
    EEPROM.update(i, 1);
  }
  digitalWrite(13, HIGH);
  Serial.println("The Update operation is successful");
}

void loop()
{
  
}
