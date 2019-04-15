#include "Light.hpp"

Light::Light() {}

Light::~Light() {}

void Light::on() {
    std::cout << "Light ON" << std::endl;
}

void Light::off() {
    std::cout << "Light OFF" << std::endl;
}