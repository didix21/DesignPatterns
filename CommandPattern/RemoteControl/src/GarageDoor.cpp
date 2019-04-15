#include "GarageDoor.hpp"

using namespace std::this_thread;
using namespace std::chrono_literals;

GarageDoor::GarageDoor(int doorLength, int doorWidth) : lightOnCommand(&light), lightOffCommand(&light) {
    this->doorLength = doorLength;
    this->doorWidth = doorWidth;
    charOfEqualsWidth = addEquals(this->doorWidth); 
    charOfEqualsLength = "";
}

GarageDoor::~GarageDoor() {}

void GarageDoor::up() {

}

void GarageDoor::down() {
    std::cout << "Garege door DOWN" << std::endl;
    
    lightOn();

    for (auto i = 0; i < doorLength; ++i) {
        std::cout << charOfEqualsWidth << std::endl;
        waitSomeTime(100ms);
    }

    lightOff();
}

void GarageDoor::lightOn() {
    lightOnCommand.execute();
}

void GarageDoor::lightOff() {
    lightOffCommand.execute();
}



template<class Rep, class Period>
void GarageDoor::waitSomeTime(const std::chrono::duration<Rep, Period>& sleep_duration) {
    sleep_for(sleep_duration);
}

std::string GarageDoor::addEquals(int numberOfEquals) {
    std::string nEquals = "";

    for(auto i = 0; i < numberOfEquals; ++i) {
        nEquals += "=";
    }

    return nEquals;
}

std::string GarageDoor::deleteEquals(int numberOfEquals) {
    std::string nEquals = addEquals(numberOfEquals);

}