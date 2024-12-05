/*
Ai nevoie de Arduino, 2 led-uri, breadboard, 2 rezistori 220ohm, cabluri mama-mama)
*/
void setup() { 
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
}
