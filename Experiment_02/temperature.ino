#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 8);

const int tempPin = A0;

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  int value = analogRead(tempPin);

  float voltage = value * 5.0 / 1023.0;
  float temperature = (voltage - 0.5) * 100.0;

  lcd.setCursor(0, 0);
  lcd.print("Temperature:");

  lcd.setCursor(0, 1);
  lcd.print(temperature);
  lcd.write(223);
  lcd.print("C   ");

  delay(1000);
}