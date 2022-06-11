#include "StatisticsDisplay.h"
#include <iostream>

StatisticsDisplay::StatisticsDisplay(WeatherData *weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void StatisticsDisplay::update(double temperature, double humidity, double pressure) 
{
    this->_sum += temperature;
    ++_count;
    
    if(temperature < this->_min){
        this->_min = temperature;    
    } 
    if(temperature > this->_max){
        this->_max = temperature;
    }
    
    display();
}

void StatisticsDisplay::display() 
{
    std::cout << "Avg/Max/Min Temperature = " << (_sum/_count) << "/" << _max << "/" << _min << std::endl;
}