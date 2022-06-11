#ifndef STATISTICS_DISPLAY_H
#define STATISTICS_DISPLAY_H

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

class StatisticsDisplay : public Observer, DisplayElement
{
private:
    double _sum, _max, _min = 100.0;
    int _count;
    WeatherData *weatherData;

public:
    StatisticsDisplay(WeatherData *weatherData);
    void update(double temperature, double humidity, double pressure);
    void display();
};

#endif /* ifndef STATISTICS_DISPLAY_H */