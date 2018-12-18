#include "WeatherData.hpp"

WeatherData::WeatherData() {

}

WeatherData::~WeatherData() {

}

void WeatherData::registerObserver(Observer* observer)
{
    //observers.push_back(std::make_unique<Observer>(observer));
}

void WeatherData::removeObserver(Observer* observer)
{
    //observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void WeatherData::notifyObservers()
{

}

std::forward_iterator_tag WeatherData::indexOf(Observer* observer)
{
    //return std::remove(observers.begin(), observers.end(), std::make_unique<Observer>(observer));
    return std::forward_iterator_tag();
}