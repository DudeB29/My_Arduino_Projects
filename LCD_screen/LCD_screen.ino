/*Exemplu de ecran lcd
  Ai nevoie de:Arduino, breadboard, 4 cabluri jumperwire, 2 cabluri same sided, lcd monitor
  conecteaza de la 5v pin la pin pozitiv de pe breadboard, unu de la ground de pe placa pe cel de breadboard negativ
  2 cabluri mama-tata de la SDA si SCL la A4 si A5 in oridea asta
  2 cabluri mama-tata: unul de la 5v la VCC si de la ground la GND
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
//
void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("I love Arduino");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Don't forget to");
  lcd.setCursor(0, 1);
  lcd.print("Check the wires!");
  delay(6000);
  lcd.clear();
}
