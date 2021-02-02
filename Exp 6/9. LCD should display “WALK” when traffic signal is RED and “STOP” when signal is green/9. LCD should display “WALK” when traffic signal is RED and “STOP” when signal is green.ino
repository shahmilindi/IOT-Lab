#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() { 
  lcd.begin(16, 2); 
  pinMode(7, OUTPUT); // green
  pinMode(8, OUTPUT); // yellow
  pinMode(9, OUTPUT); // red
}

void loop() {
  for (int i = 9; i>=7; i--){
  	digitalWrite(i, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    if (i==9){
    	lcd.print("WALK");
      	delay(5000);
    }
    else if (i==8){
    	lcd.print("LOOK");
      	delay(5000);
    }
    else{
    	lcd.print("STOP");
      	delay(5000);
    }
    digitalWrite(i,LOW);
  }
  
}


