#include "LightCommands.hpp"

LightOnCommand::LightOnCommand(Light *light) {
    this->light = light;
}

LightOnCommand::~LightOnCommand() {}

void LightOnCommand::execute() {
    light->on();
}

std::string LightOnCommand::type() {
    return std::string("LightOnCommand");
}

LightOffCommand::LightOffCommand(Light *light) {
    this->light = light;
}

LightOffCommand::~LightOffCommand() {}

void LightOffCommand::execute() {
    light->off();
}

std::string LightOffCommand::type() {
    return std::string("LightOffCommand");
}
