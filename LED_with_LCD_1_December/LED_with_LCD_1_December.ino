#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  lcd.clear();
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(13,LOW);
  delay(1000);

  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(13,LOW);
  delay(1000);

  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(13,HIGH);
  lcd.setCursor(0, 0);
  lcd.print("La multi ani");
  lcd.setCursor(0, 1);
  lcd.print("Romania!!!");
  delay(5000);
  lcd.clear();

  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(13,LOW); 
  delay(1000);

  
 
}
