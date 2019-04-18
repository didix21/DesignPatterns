#pragma once

#include <string>
#include "Command.hpp"
#include "Light.hpp"

class RemoteControl {
    const int num_of_slots{7};
    Command** onCommands;
    Command** offCommands;

public:

    RemoteControl();
    ~RemoteControl();
    
    void setCommad(int slot, Command* onCommand, Command* offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int  slot);
    std::string toString();

};
