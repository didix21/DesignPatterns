#include "Light.hpp"

Light::Light() {}

Light::Light(std::string lightRoom) {
   this->lightRoom = lightRoom;
}

Light::~Light() {}

void Light::on() {
    std::cout << lightRoom << " ON" << std::endl;
}

void Light::off() {
    std::cout << lightRoom << " OFF" << std::endl;
}