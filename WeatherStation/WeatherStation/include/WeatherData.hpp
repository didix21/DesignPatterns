#pragma once

#include <vector>
#include <memory>
#include <algorithm>
#include "Subject.hpp"


class WeatherData : public Subject
{
private:
  std::vector<Observer*> observers;
  float temperature;
  float humidity;
  float pressure;

public:
  WeatherData();
  ~WeatherData();

  void registerObserver(Observer* observer) override;
  void removeObserver(Observer* observer) override;

  void setMeasurements(float temperature, float humidity, float pressure);

  void measurementsChanged();

  void notifyObservers() override;

  

private:
  std::vector<Observer*>::iterator indexOf(Observer* observer); 

};