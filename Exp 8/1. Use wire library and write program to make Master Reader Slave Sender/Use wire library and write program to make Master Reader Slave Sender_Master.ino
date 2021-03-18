#include<Wire.h>
#define ADDR 1
// Master arduino
void setup()
{
  Wire.begin();
  Serial.begin(9600);
}
void loop()
{
  Wire.requestFrom(ADDR, 6);
  while (Wire.available()) { 
    char c = Wire.read(); 
    Serial.print(c);         
  }
  Serial.println();
  delay(500);
}