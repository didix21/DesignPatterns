#pragma once

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#include "Light.hpp"
#include "LightCommands.hpp"

class GarageDoor {
    int doorLength;
    int doorWidth;
    std::string charOfEqualsLength;
    std::string charOfEqualsWidth;
    Light light;
    LightOnCommand lightOnCommand;
    LightOffCommand lightOffCommand;


public:
    GarageDoor(int doorLength = 10, int doorWidth = 10);
    ~GarageDoor();

    void up();
    void down();
    void stop();

private:
    void lightOn();
    void lightOff();

    template<class Rep, class Period>
    void waitSomeTime(const std::chrono::duration<Rep, Period>& sleep_duration);

    std::string addEquals(int numberOfEquals);
    std::string deleteEquals(int numberOfEquals);
    
};