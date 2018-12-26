#include "ForecastDisplay.hpp"

ForecastDisplay::ForecastDisplay(Observable *observable)
{
    this->observable = observable;

    this->observable->addObserver(this);
}

void ForecastDisplay::update(Observable *observable)
{
    if(WeatherData* weatherData = static_cast<WeatherData *>(observable)) 
    {
        this->temperature = weatherData->getTemperature();
        this->humidity = weatherData->getHumidity();
        this->pressure = weatherData->getPressure();
        
        display();
    }
}

void ForecastDisplay::display()
{
    std::cout << "The forecast is: ..." << std::endl;
}