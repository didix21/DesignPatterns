#include "ForecastDisplay.hpp"

ForecastDisplay::ForecastDisplay(Subject *weatherData)
{
    this->weatherData = weatherData;

    this->weatherData->registerObserver(this);
}

void ForecastDisplay::update(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;

    display();
}

void ForecastDisplay::display()
{
    std::cout << "The forecast is: ..." << std::endl;
}