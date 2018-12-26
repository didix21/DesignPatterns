#pragma once

#include "Observer.hpp"
#include "Observable.hpp"

class WeatherData : public Observable
{
private:
  float temperature;
  float humidity;
  float pressure;

public:
  WeatherData();
  ~WeatherData();

  void setMeasurements(float temperature, float humidity, float pressure);

  void measurementsChanged();

  float getTemperature() { return temperature; }
  float getHumidity() { return humidity; }
  float getPressure() { return pressure; }
};