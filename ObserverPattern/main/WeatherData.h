#ifndef WEATHDER_DATA_H
#define WEATHDER_DATA_H

#include "Subject.h"
#include "Observer.h"
#include <list>

class WeatherData : public Subject
{
private:
    std::list<Observer *> _listObs;
    double _temperature;
    double _humidity;
    double _pressure;
public:
    //ctor
    WeatherData(/* args */) = default;
    //methods
    void registerObserver(Observer *obs) override;
    void removeObserver(Observer *obs) override;
    void notifyObserver() override;
    void measurementChanged();
    void setMeasurements(double t, double h, double p);
};

#endif /* ifndef WEATHER_DATA_H */