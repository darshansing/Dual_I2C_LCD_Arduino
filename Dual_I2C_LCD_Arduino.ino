#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize two I2C LCD displays with different I2C addresses
LiquidCrystal_I2C lcd1(0x27, 16, 2); // Display 1: I2C Address 0x27
LiquidCrystal_I2C lcd2(0x26, 16, 2); // Display 2: I2C Address 0x26

// Function to initialize an LCD
void initializeLCD(LiquidCrystal_I2C &lcd, const char* message) {
  lcd.init();           // Initialize the LCD
  lcd.clear();          // Clear any previous content
  lcd.backlight();      // Turn on backlight
  lcd.print(message);   // Print initial message
}

void setup() {
  // Initialize both LCDs with respective messages
  initializeLCD(lcd1, "ELES KANPUR");
  initializeLCD(lcd2, "DARSHAN SINGH:");
}

void loop() {
  // Future functionality can be added here
}
