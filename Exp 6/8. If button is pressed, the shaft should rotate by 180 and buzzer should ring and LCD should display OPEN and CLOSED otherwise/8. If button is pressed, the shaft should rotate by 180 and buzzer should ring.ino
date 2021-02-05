#include <LiquidCrystal.h>
#include<Servo.h>
Servo myservo;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() { 
  lcd.begin(16, 2); 
  myservo.attach(8);
  pinMode(1, INPUT);
}

void loop() {
  int read = digitalRead(1);
  if (read == HIGH){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Open");
    myservo.write(90);
    delay(1000);
  }
  else{
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Closed");
    myservo.write(0);
    delay(1000);
}
}
