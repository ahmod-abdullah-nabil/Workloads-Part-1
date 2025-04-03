#include <Arduino.h>
// include the library code:
#include <LiquidCrystal.h> //library for LCD

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

// defines pins numbers
const int SensorPin = 2;
const int LEDPin = 7;

void setup()
{
  pinMode(SensorPin, INPUT); // Sets the Pin as an Input
  pinMode(LEDPin, OUTPUT);   // Sets the Pin as an OUTPUT

  lcd.begin(20, 4);    // set up the LCD's number of columns and rows:
  lcd.setCursor(0, 0); // set the cursor position:
  lcd.print("  THE BRIGHT LIGHT    ");
  lcd.setCursor(0, 1);
  lcd.print("  CAP TOUCH SENSOR");
}
void loop()
{
  int Val = analogRead(SensorPin); // Read the analog value form sensor
  int Flex = map(Val, 0, 1019, 0, 90);
  if (digitalRead(SensorPin) == HIGH)
  {
    lcd.setCursor(0, 3);
    lcd.print("      Touched ");
    digitalWrite(LEDPin, HIGH);
  }
  else
  {
    lcd.setCursor(0, 3);
    lcd.print("                  ");
    digitalWrite(LEDPin, LOW);
  }
}
