#include "StatisticsDisplay.hpp"

StatisticDisplay::StatisticDisplay(Observable *observable)
{
    this->observable = observable;
    
    this->observable->addObserver(this);
}

StatisticDisplay::~StatisticDisplay()
{
    
}

void StatisticDisplay::update(Observable *observable)
{
    if(WeatherData *weatherData = static_cast<WeatherData *>(observable))
    {
        this->temperature = weatherData->getTemperature();
        this->humidity = weatherData->getHumidity();
        this->pressure = weatherData->getPressure();

        updateData();
        
        display();
    }
}

void StatisticDisplay::display()
{
    std::cout << "Avg/Max/Min temperature =" << avg_temp << '/' << max_temp << '/' << min_temp << '\n'
        << "Avg/Max/Min humidity =" << avg_humidity << '/' << max_humidity << '/' << min_humidity << '\n'
        << "Avg/Max/Min pressure =" << avg_press << '/' << max_press << '/' << min_press << '\n';
}

void StatisticDisplay::updateData()
{
    updateAverageTemperature();
    updateMaxTemperature();
    updateMinTemperature();

    updateAverageHumidity();
    updateMaxHumidity();
    updateMinHumidity();

    updateAveragePressure();
    updateMaxPressure();
    updateMinPressure();
}

void StatisticDisplay::updateAverageTemperature()
{
    static int num_mesurements = 0;
    avg_temp = (avg_temp * num_mesurements + temperature) / (++num_mesurements);
}

void StatisticDisplay::updateMaxTemperature()
{
     if(max_temp < temperature)
        max_temp = temperature;
}

void StatisticDisplay::updateMinTemperature()
{
    if(min_temp > temperature)
        min_temp = temperature;
}

void StatisticDisplay::updateAverageHumidity()
{
    static int num_mesurements = 0;
    avg_humidity = (avg_humidity * num_mesurements + humidity) / (++num_mesurements);
}

void StatisticDisplay::updateMaxHumidity()
{
    if(max_humidity < humidity)
        max_humidity = humidity;
}

void StatisticDisplay::updateMinHumidity()
{
    if(min_humidity > humidity)
        min_humidity = humidity;
}

void StatisticDisplay::updateAveragePressure()
{
    static int num_mesurements = 0;
    avg_press = (avg_press * num_mesurements + pressure) / (++num_mesurements);
}

void StatisticDisplay::updateMaxPressure()
{
    if(max_press < pressure)
        max_press = pressure;
}

void StatisticDisplay::updateMinPressure()
{
    if(min_press > pressure)
        min_press = pressure;
}