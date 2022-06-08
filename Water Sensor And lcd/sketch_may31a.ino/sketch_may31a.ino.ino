#include <LiquidCrystal.h>

//https://www.thegeekpub.com/16484/arduino-lcd-display-wiring/
const int rs = 12, en = 11, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

int resval = 0;  // holds the value
int respin = A5; // sensor pin used
  
void setup() { 
 
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2); 
  
  // Print a message to the LCD. 
  lcd.print("WATER LEVEL: "); 
} 
  
void loop() { 
  // set the cursor to column 0, line 1 
  lcd.setCursor(0, 1); 
    
  resval = analogRead(respin); //Read data from analog pin and store it to resval variable
   
  if (resval<=100){ lcd.println(resval); } else if (resval>100 && resval<=300){ lcd.println(resval); } else if (resval>300 && resval<=330){ lcd.println(resval); } else if (resval>330){ 
    lcd.println(resval); 
  }
  delay(500); 
}
