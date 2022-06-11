#include "WeatherData.h"

void WeatherData::registerObserver(Observer *obs) 
{
    _listObs.push_back(obs);
}

void WeatherData::removeObserver(Observer *obs)
{
    if(!_listObs.empty()){
        _listObs.remove(obs);
    }
}

void WeatherData::notifyObserver()
{
    for(auto obs : _listObs) {
        obs->update(_temperature,_humidity, _pressure);
    }
}

void WeatherData::measurementChanged()
{
    WeatherData::notifyObserver();
}

void WeatherData::setMeasurements(double t, double h, double p){
    _temperature = t;
    _humidity = h;
    _pressure = p;
    measurementChanged();
}