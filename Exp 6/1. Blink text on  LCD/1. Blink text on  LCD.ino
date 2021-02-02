#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup () {
  lcd.begin(16,2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print ("Hello World");
 	delay(1000);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print ("");
 	delay(1000);
  
}