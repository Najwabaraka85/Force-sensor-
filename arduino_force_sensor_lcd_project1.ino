int reading = 0;
int f = 0;
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32 , 16,2);
void setup() {
lcd.init();
lcd.backlight();
lcd.print("Loading force...");
delay(250);
pinMode(A0 , INPUT);
}
void loop() {
reading = analogRead(A0);
f = map( reading , 0 , 1023 , 0 , 522);
lcd.setCursor(0,0);
lcd.print("Reading= ");
lcd.print(f);
lcd.print("      ");

}