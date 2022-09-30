#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup(){
  lcd.begin(16,2);
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(0,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  lcd.setCursor(5,0);
  lcd.print("STOP");
  delay(2000);
  lcd.clear();
  digitalWrite(0,LOW);
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  lcd.setCursor(5,0);
  lcd.print("WAIT");
  delay(2000);
  lcd.clear();
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  lcd.setCursor(5,0);
  lcd.print("GO");
  delay(2000);
  lcd.clear();

  // put your main code here, to run repeatedly:

}
