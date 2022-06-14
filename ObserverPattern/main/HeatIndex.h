#ifndef HEAT_INDEX_H
#define HEAT_INDEX_H

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class HeatIndex : public Observer, DisplayElement
{
    private:
        double _heatIndex;
        WeatherData *weatherData;
    public:
        HeatIndex(WeatherData *weatherData);
        void update(double temperature, double humidity, double pressure);
        void display();

};

#endif  /* ifndef OBSERVER_H */