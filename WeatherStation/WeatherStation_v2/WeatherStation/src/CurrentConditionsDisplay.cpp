#include "CurrentConditionsDisplay.hpp"

CurrentConditionDisplay::CurrentConditionDisplay(Subject* weatherData)
{
    this->weatherData = weatherData;
    
    this->weatherData->registerObserver(this);
}

CurrentConditionDisplay::~CurrentConditionDisplay()
{

}

void CurrentConditionDisplay::update(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}

void CurrentConditionDisplay::display()
{
    std::cout << "Current Conditions: " << temperature << "º and " << humidity << "% humidity" << std::endl;
}