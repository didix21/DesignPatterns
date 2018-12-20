#include "WeatherData.hpp"

WeatherData::WeatherData()
{
}

WeatherData::~WeatherData()
{
}

void WeatherData::registerObserver(Observer *observer)
{
    observers.push_back(observer);
}

void WeatherData::removeObserver(Observer *observer)
{
    observers.erase(indexOf(observer), observers.end());
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
    notifyObservers();
}

void WeatherData::notifyObservers()
{
    for (auto observer : observers)
        observer->update(temperature, humidity, pressure);
}

std::vector<Observer *>::iterator WeatherData::indexOf(Observer *observer)
{
    return std::find(observers.begin(), observers.end(), observer);
}