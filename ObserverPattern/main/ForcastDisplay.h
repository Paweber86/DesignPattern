#ifndef FORCAST_DISPLAY_H
#define FORCAST_DISPLAY_H

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class ForcastDisplay : public Observer, DisplayElement
{
private:
    double _currentPressure;
    double _previousPressure;
    WeatherData *weatherData;

public:
    ForcastDisplay(WeatherData *weatherData);
    void update(double temperature, double humidity, double pressure);
    void display();
};

#endif/* ifndef FORCAST_DISPLAY_H */