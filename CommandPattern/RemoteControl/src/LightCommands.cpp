#include "LightCommands.hpp"

LightOnCommand::LightOnCommand(Light *light) {
    this->light = light;
}

LightOnCommand::~LightOnCommand() {}

void LightOnCommand::execute() {
    light->on();
}

LightOffCommand::LightOffCommand(Light *light) {
    this->light = light;
}

LightOffCommand::~LightOffCommand() {}

void LightOffCommand::execute() {
    light->off();
}