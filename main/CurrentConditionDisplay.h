#ifndef CURRENT_CONDITIONS_DISPLAY
#define CURRENT_CONDITIONS_DISPLAY

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class CurrentConditionDisplay : public Observer, DisplayElement
{
private:
    double _temp;
    double _hum;
    WeatherData *weatherData;
    
public:
    CurrentConditionDisplay(WeatherData *weatherData);
    void update(double temperature, double humidity, double pressure);
    void display();
};

#endif /* ifndef CURRENT_CONDITIONS_DISPLAY */