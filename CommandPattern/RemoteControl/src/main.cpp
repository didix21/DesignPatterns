#include <memory>
#include <string>


#include "Command.hpp"
#include "Light.hpp"
#include "SimpleRemoteControl.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorCommands.hpp"


int main() {
    std::unique_ptr<SimpleRemoteControl> remote = std::make_unique<SimpleRemoteControl>();
    Light light;
    LightOnCommand lightOn(&light);
    
    GarageDoor garageDoor(10, 20);
    GarageDoorCloseCommand garageClose(&garageDoor);

    remote->setCommand(&lightOn);
    remote->buttonWasPressed();
    remote->setCommand(&garageClose);
    remote->buttonWasPressed();

}