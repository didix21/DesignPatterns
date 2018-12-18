#pragma once

#include <vector>
#include <memory>
#include <algorithm>
#include "Subject.hpp"


class WeatherData : public Subject
{
private:
  std::vector<std::unique_ptr<Observer>> observers;
  float temperature;
  float humidity;
  float pressure;

public:
  WeatherData();
  ~WeatherData();

  void registerObserver(Observer* observer);
  void removeObserver(Observer* observer);
  void notifyObservers();

  float getTemperature();
  float getHumidty();
  float getPressure();
  void measurementsChanged();

private:

  std::forward_iterator_tag indexOf(Observer* observer); 

};