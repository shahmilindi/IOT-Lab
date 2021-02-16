#include<EEPROM.h>
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  for(int i=0; i<=EEPROM.length(); i++){
  	EEPROM.write(i,0);
  }
  Serial.println("Write operation is done");
  digitalWrite(13, HIGH);
  for(int i=0; i<=EEPROM.length(); i++){
  	EEPROM.update(i,i);
  }
  Serial.println("Update operation is done");
  int myint = 1;
  EEPROM.put(0,myint);
  Serial.println("Put operation is done");
  Serial.println("Getting the value which we had put");
  int get = EEPROM.get(0,myint);
  Serial.println(get); 
  Serial.println("Reading the value at the last bit");
  int read = EEPROM.read(EEPROM.length());
  Serial.println(read);
  
}

void loop()
{
}
