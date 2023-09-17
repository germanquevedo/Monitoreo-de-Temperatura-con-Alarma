#include <LEDClient.h>
#include <ArduinoSTL.h>

LEDClient::LEDClient(int pin) : ledPin(pin) {
    pinMode(ledPin, OUTPUT);
}

void LEDClient::update(float temperature, int index) {
    TemperatureSensor tempS;
    if (temperature > 25.0 && index == (tempS.getActiveClientIndex())) {
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }
}