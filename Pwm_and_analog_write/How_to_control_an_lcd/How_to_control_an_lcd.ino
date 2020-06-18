// Differtent lcd control commands


/*
 *  
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD and counts 123 to infinity.

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

#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int Rs = 12, E = 11, D4 = 4, D5 = 5, D6 = 6, D7 = 7;
LiquidCrystal lcd(Rs, E, D4, D5, D6, D7);

void setup() {
  //  set the lcd's numbers of columns and rows:
lcd.begin(16, 2);
}

void loop() {
  // Print Arduino on the lcd and delay for 3sec:
lcd.print("Arduino");
delay(3000);

// set cursor to the second row and third column:
// (note: line 1 is the second row, since counting begins with o):  
lcd.setCursor(2, 1);
lcd.print("LCD tutorial");
delay(3000);

// clear the lcd screen:
lcd.clear();

// blink the cursor for 4 sec:
lcd.blink();
delay(4000);

// set the cursor to the second column and second row and delay for 3 sec:
lcd.setCursor(1, 1);
delay(3000);
// stop the blinking:
lcd.noBlink();

// this brings out the underscore cursor delay for 4 sec:
lcd.cursor();
delay(4000);
// remove cursor:
lcd.noCursor();

lcd.clear();

lcd.print("The Lord is good");
delay(3000);

lcd.setCursor(2, 1);
lcd.print("it is working");
delay(3000);
 lcd.clear ();
}
