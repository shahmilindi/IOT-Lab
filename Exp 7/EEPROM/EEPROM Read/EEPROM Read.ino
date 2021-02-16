#include<EEPROM.h>
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Using write operation in EEPROM");
  for (int i=0; i<EEPROM.length(); i++){
  	EEPROM.write(i, 100);
  }
  Serial.println("Using read operation in EEPROM");
  for (int i=0; i<EEPROM.length(); i++){
    Serial.print(i);
    Serial.print("\t");
    Serial.print(EEPROM.read(i));
    Serial.println();
  }
  digitalWrite(13, HIGH);
  Serial.println("the Read operation is successful");
}

void loop()
{
  
}
