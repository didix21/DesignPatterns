#include "WeatherData.hpp"

WeatherData::WeatherData()
{
}

WeatherData::~WeatherData()
{
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;

    measurementsChanged();
}

void WeatherData::measurementsChanged()
{
    setChanged();
    notifyObservers();
}