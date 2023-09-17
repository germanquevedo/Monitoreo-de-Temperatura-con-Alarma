#include "TemperatureSensor.h"

// Cliente LED (Observador)
class LEDClient : public Observer {
private:
    int ledPin;

public:
    LEDClient(int pin);

    void update(float temperature, int index) override;
};