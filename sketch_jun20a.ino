#include <LiquidCrystal.h>
int lm35Pin = A1;
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup() 
{
  lcd.begin(16,2);
  analogReference(INTERNAL);
  lcd.print("Sicaklik Olcumu:");
  //pinMode(10,OUTPUT);
  //digitalWrite(10,LOW);
}
 
void loop()
{
  int sicaklikVolt = analogRead(lm35Pin);
  float sicaklikC = sicaklikC = sicaklikVolt / 9.31; 
  lcd.setCursor(0, 1);
  lcd.print(sicaklikC);
  lcd.setCursor(6,1);
  lcd.print("\337C");
  delay(100);
}
