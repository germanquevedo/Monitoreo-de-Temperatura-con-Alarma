
#include <Arduino.h>
#include <LiquidCrystal.h>
#include "TemperatureSensor.h"
#include <LCDDisplay.h>
#include <LEDClient.h>


TemperatureSensor tempSensor;
LEDClient ledClient1(8);
LEDClient ledClient2(9);
LCDDisplay lcdDisplay;

void setup() {
    lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("Clientes y Temp:");
    tempSensor.addObserver(&ledClient1);
    tempSensor.addObserver(&ledClient2);
    tempSensor.addObserver(&lcdDisplay);
}

void loop() {
    tempSensor.checkTemperatureChange();
    delay(2000);
}