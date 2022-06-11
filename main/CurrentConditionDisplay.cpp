#include "CurrentConditionDisplay.h"
#include <iostream>

CurrentConditionDisplay::CurrentConditionDisplay(WeatherData *weatherData)
{   this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionDisplay::update(double temperature, double humidity, double pressure) 
{
    this->_temp = temperature;
    this->_hum = humidity;
    display();
}

void CurrentConditionDisplay::display()
{
    std::cout<<"Current conditions: " << _temp 
        << "F degress and " << _hum << "% humidity"<< std::endl;
}