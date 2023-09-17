#include <LiquidCrystal.h>
#include <Observer.h>

// Librería para el display LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Pantalla LCD (Observador)
class LCDDisplay : public Observer {
public:
    LiquidCrystal lcd;
   // LCDDisplay();

    LCDDisplay(int rs, int en, int d4, int d5, int d6, int d7) : lcd(rs, en, d4, d5, d6, d7) {
        lcd.begin(16, 2);
        lcd.setCursor(0, 0);
        lcd.print("Clientes y Temp:");
    }

        void update(float temperature, int index) override;
};
