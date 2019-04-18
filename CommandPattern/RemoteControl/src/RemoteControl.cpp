#include "RemoteControl.hpp"

RemoteControl::RemoteControl() {
    onCommands = new Command*[num_of_slots];
    offCommands = new Command*[num_of_slots];

    for (int i = 0; i < num_of_slots; ++i) {
        onCommands[i] = new NoCommand();
        offCommands[i] = new NoCommand();
    }

}

RemoteControl::~RemoteControl() {
    delete[] onCommands;
    delete[] offCommands;
}

void RemoteControl::setCommad(int slot, Command* onCommand, Command* offCommand) {
    this->onCommands[slot] = onCommand;
    this->offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot) {
    onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot) {
    offCommands[slot]->execute();
}

std::string RemoteControl::toString() {
    std::string remote_control_info = "\n------ Remote Control ------\n";
    for (int i = 0; i < num_of_slots; i++) {
        remote_control_info.append("[slot " + std::to_string(i) + "] " + onCommands[i]->type() 
        + "    " + offCommands[i]->type() + '\n');
    }

    return remote_control_info;
}