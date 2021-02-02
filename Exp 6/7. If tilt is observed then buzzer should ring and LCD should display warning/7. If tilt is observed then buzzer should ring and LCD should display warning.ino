#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
  pinMode(7, INPUT);
}
void loop() {
  int read = analogRead(7);
  if (read == 0){   
    lcd.setCursor(0, 0);
    lcd.print("No warning");
    noTone(6);
    
  }
  else{
    lcd.setCursor(0,0);
    lcd.print("Warning");
    tone(6, 440);
    delay(1000);
    noTone(6);
  }
}
