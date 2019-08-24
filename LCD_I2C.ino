#include <Wire.h>
#include <LiquidCrystal_I2C.h>
char array1[] = "MSJ Researchers World             ";
int tim = 500;
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
}

void loop() {
  
    lcd.print(array1);
    for (int positionCounter = 0; positionCounter < 26; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
    
    }
lcd.clear();
}
