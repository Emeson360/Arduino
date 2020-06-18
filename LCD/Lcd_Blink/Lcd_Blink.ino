/*
  LiquidCrystal Library - Blink

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD and makes the
 cursor block blink.

 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 4
 * LCD D5 pin to digital pin 5
 * LCD D6 pin to digital pin 6
 * LCD D7 pin to digital pin 7
 * LCD R/W pin to ground
 * 10K resistor:
   * ends to +5V and ground
   * wiper to LCD VO pin (pin 3)
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int Rs = 12, E = 11, D4 = 4, D5 = 5, D6 = 6, D7 = 7;
LiquidCrystal lcd(Rs, E, D4, D5, D6, D7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!!!");
}

void loop() {
  // set cursor  to the first column and first row
  lcd.setCursor(0,0); 
  
  // Turn on the blinking cursor:
  lcd.blink();
  delay(500);

  lcd.setCursor(1,0);
  lcd.blink();
  delay(500);
  
  lcd.setCursor(2,0);
  lcd.blink();
  delay(500);
  
  lcd.setCursor(3,0);
  lcd.blink();
  delay(500);
      
  lcd.setCursor(4,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(5,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(6,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(7,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(8,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(9,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(10,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(11,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(12,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(13,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(14,0);
  lcd.blink();
  delay(500);

  lcd.setCursor(15,0);
  lcd.blink();
  delay(500);
  
  // Turn off the blinking cursor:
  lcd.noBlink();
  delay(300);

}
