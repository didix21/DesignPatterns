#include "CurrentConditionsDisplay.hpp"

CurrentConditionDisplay::CurrentConditionDisplay(Observable* observable)
{
    this->observable = observable;
    this->observable->addObserver(this);
}

CurrentConditionDisplay::~CurrentConditionDisplay()
{

}

void CurrentConditionDisplay::update(Observable *observable)
{
    if(WeatherData *weatherData = static_cast<WeatherData *>(observable))
    {
        this->temperature = weatherData->getTemperature();
        this->humidity = weatherData->getHumidity();
        display();
    }
}

void CurrentConditionDisplay::display()
{
    std::cout << "Current Conditions: " << temperature << "º and " << humidity << "% humidity" << std::endl;
}