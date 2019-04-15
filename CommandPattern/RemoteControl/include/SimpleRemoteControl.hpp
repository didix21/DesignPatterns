#pragma once

#include "Command.hpp"
#include <memory>

class SimpleRemoteControl {

    Command *slot;

public:
    SimpleRemoteControl();
    ~SimpleRemoteControl();

    void setCommand(Command *command);
    void buttonWasPressed();    
};