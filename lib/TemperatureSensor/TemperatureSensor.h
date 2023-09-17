#ifndef TemperatureSensor_h
#define TemperatureSensor_h

#include <LiquidCrystal.h>
#include <Observer.h>
#include <vector>


// Pines de conexión para el sensor LM35
#define LM35_PIN A0  // Define el pin analógico al que está conectado el sensor LM35

// Sensor de Temperatura (Sujeto Observado)

class TemperatureSensor {
private:
    float currentTemperature;
    int activeClientIndex;
    std::vector<Observer*> observers;

public:
    TemperatureSensor();
    
    void addObserver(Observer* observer);

    void removeObserver(Observer* observer);

    float readLM35Temperature();

    void checkTemperatureChange();

    float getTemperature() const;

    int getActiveClientIndex();

    void setActiveClientIndex(int index);

private:
    void notifyObservers();
};
 
#endif

