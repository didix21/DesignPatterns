#include "SimpleRemoteControl.hpp"

SimpleRemoteControl::SimpleRemoteControl() {}

SimpleRemoteControl::~SimpleRemoteControl() {}

void SimpleRemoteControl::setCommand(Command *command) {
    this->slot = command;
}

void SimpleRemoteControl::buttonWasPressed() {
    slot->execute();
}