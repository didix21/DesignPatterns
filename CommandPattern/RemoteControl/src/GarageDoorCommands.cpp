#include "GarageDoorCommands.hpp"

GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor* garageDoor) {
    this->garageDoor = garageDoor;
}

GarageDoorCloseCommand::~GarageDoorCloseCommand() {

}

void GarageDoorCloseCommand::execute() {
    garageDoor->down();
}