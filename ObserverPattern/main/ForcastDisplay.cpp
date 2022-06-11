#include "ForcastDisplay.h"
#include <iostream>

ForcastDisplay::ForcastDisplay(WeatherData *weatherData){
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void ForcastDisplay::update(double temperature, double humidity, double pressure) 
{
    this->_previousPressure = this->_currentPressure;
    this->_currentPressure = pressure;
    display();
}

void ForcastDisplay::display()
{
    std::cout << "Forcast: ";
        if(this->_currentPressure > this->_previousPressure) {
            std::cout << "Improving weather on the way!" << std::endl;
        } 
        else if(this->_currentPressure == this->_previousPressure) {
            std::cout << "More of the same" << std::endl;
        } 
        else {
            std::cout << "Watch out for cooler, rainy weather" << std::endl;
        }
}