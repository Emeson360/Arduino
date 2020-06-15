// LCD DISPLAY CODE

// include the library code:
#include <LiquidCrystal.h>

//initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set the lcd's numbers of columns and rows:
  lcd.begin(16, 2);
  //print a message to the lcd
  lcd.print("hello world!!!");

}

void loop() {
  // set the cursor to column 0, line 1:
  // (note: line 1 is the second row, since counting begins with o):
  lcd.setCursor(0, 1);
  //print the number of seconds since rest:
  lcd.print(millis() / 1000);

}
