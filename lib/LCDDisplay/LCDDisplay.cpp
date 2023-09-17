#include <LCDDisplay.h>

// Pantalla LCD (Observador)

//LCDDisplay::LCDDisplay() {}

void LCDDisplay::update(float temperature, int index) {
    lcd.setCursor(0, 1);
    lcd.print("Temp: ");
    lcd.print(temperature);
    lcd.print(" C   ");

    lcd.setCursor(10, 1);
    lcd.print("Cliente: ");
    lcd.print(index);
}