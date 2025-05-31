# Dual I2C LCD Display with Arduino Uno

This project demonstrates how to interface **two I2C-based 16x2 LCDs** with a single Arduino Uno board using the `LiquidCrystal_I2C` library.

## 📷 Preview
![Project Preview](images/dual_lcd.jpg)

## 🔧 Components Required
- Arduino Uno
- 2x I2C 16x2 LCD Displays
- Jumper Wires
- Breadboard

## 📐 Circuit Connections
Both LCDs share the same SDA (A4) and SCL (A5) lines:
- **LCD1 I2C Address**: 0x27  
- **LCD2 I2C Address**: 0x26  
- Connect SDA of both LCDs to A4  
- Connect SCL of both LCDs to A5  
- Power (VCC & GND) from Arduino to both displays

> Use an I2C scanner sketch to detect the correct addresses of your LCDs.

## 📄 Arduino Code
```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd1(0x27, 16, 2);
LiquidCrystal_I2C lcd2(0x26, 16, 2);

void setup() {
  lcd1.init();
  lcd2.init();

  lcd1.backlight();
  lcd1.clear();
  lcd1.setCursor(0, 0);
  lcd1.print("ELES KANPUR");

  lcd2.backlight();
  lcd2.clear();
  lcd2.setCursor(0, 0);
  lcd2.print("DARSHAN SINGH");
}

void loop() {
  // No dynamic updates needed
}
