#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sensePin = A0;
int sensorInput;
double temp;
void setup()
{
  pinMode(13, OUTPUT); 
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop()
{  
  lcd.setCursor(0, 0);
  sensorInput = analogRead(A0);
  temp = (double)sensorInput / 1024;
  temp = temp * 5;
  temp = temp - 0.5;
  temp = temp * 100;
  lcd.print("Temperature: ");
  lcd.setCursor(0, 1);
  lcd.print(temp);
  lcd.print(" Celsius");
}
