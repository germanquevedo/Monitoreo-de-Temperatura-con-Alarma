#include <TemperatureSensor.h>

TemperatureSensor::TemperatureSensor() : currentTemperature(0), activeClientIndex(-1) {}

void TemperatureSensor::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void TemperatureSensor::removeObserver(Observer* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

float TemperatureSensor::readLM35Temperature() {
    int lm35Value = analogRead(LM35_PIN);
    float temperature = (lm35Value / 1024.0) * 500.0;
    return temperature;
}

void TemperatureSensor::checkTemperatureChange() {
    float newTemperature = readLM35Temperature();

    if (newTemperature != currentTemperature) {
        currentTemperature = newTemperature;
        notifyObservers();
    }
}

float TemperatureSensor::getTemperature() const {
    return currentTemperature;
}

int TemperatureSensor::getActiveClientIndex()  {
    return activeClientIndex;
}

void TemperatureSensor::setActiveClientIndex(int index) {
    activeClientIndex = index;
}

void TemperatureSensor::notifyObservers() {
    for (unsigned int i = 0; i < observers.size(); ++i) {
        activeClientIndex = i;
        observers[i]->update(currentTemperature, activeClientIndex);
    }
}