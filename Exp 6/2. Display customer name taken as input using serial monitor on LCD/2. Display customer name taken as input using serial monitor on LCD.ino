#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(100);
  lcd.begin(16, 2);
  lcd.print("Serial input");
  delay(1000); 
}

void loop() {
  if (Serial.available()>0){
    lcd.setCursor(0,0);
    lcd.clear();
    lcd.cursor();
    lcd.blink();
    lcd.print("Serial input:");
    String x=Serial.readString();
    lcd.print(x);
  }  
}