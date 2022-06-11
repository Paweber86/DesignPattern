#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "StatisticsDisplay.h"
#include "ForcastDisplay.h"
#include <iostream>

int main()
{
    WeatherData weatherData = WeatherData();
    CurrentConditionDisplay currentConditionDisplay = CurrentConditionDisplay(&weatherData);
    StatisticsDisplay statisticsDisplay = StatisticsDisplay(&weatherData);
    ForcastDisplay forcastDisplay = ForcastDisplay(&weatherData);
    weatherData.setMeasurements(80, 65, 30.4);
    weatherData.setMeasurements(82, 70, 29.2);
    weatherData.setMeasurements(78, 90, 29.2);

    return 0;
}