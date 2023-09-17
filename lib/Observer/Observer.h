#ifndef observer_h
#define observer_h

#include <Arduino.h>

// Interfaz del Observador
class Observer {
public:
  
    virtual void update(float temperature, int index) = 0;
};

#endif