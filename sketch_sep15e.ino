#include<LiquidCrystal.h>

LiquidCrystal lcd(8,9,4,5,6);

void setup()
{
  lcd.begin(16,2);
  lcd.print("Hello World!");
}
void loop()
{
  lcd.setCursor(0,0);         //first 0 for counting begining with 0 and second 0 for first raw
  lcd.print("The MS University");
  lcd.setCursor(0,1);         //first 0 for counting begining with 0 and second 1 for second raw
  lcd.print("Computer Science engineering");
}

