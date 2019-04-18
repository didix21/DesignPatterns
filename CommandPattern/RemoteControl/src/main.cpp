#include <memory>
#include <string>

#include "RemoteControl.hpp"
#include "Command.hpp"
#include "Light.hpp"
#include "LightCommands.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorCommands.hpp"


int main() {
    RemoteControl remoteControl;

    Light livingRoomLight("Living Room Light:");
    Light kitchenLight("Kitchen Light:");

    LightOnCommand livingRoomLightOn(&livingRoomLight);
    LightOffCommand livingRoomLightOff(&livingRoomLight);
    LightOnCommand kitchenLightOn(&kitchenLight);
    LightOffCommand kitchenLightOff(&kitchenLight);

    std::cout << livingRoomLightOn.type() << std::endl;

    remoteControl.setCommad(0, &livingRoomLightOn, &livingRoomLightOff);
    remoteControl.setCommad(1, &kitchenLightOn, &kitchenLightOff);

    std::cout << remoteControl.toString() << std::endl;

    remoteControl.onButtonWasPushed(0);
    remoteControl.offButtonWasPushed(0);
    remoteControl.onButtonWasPushed(1);
    remoteControl.offButtonWasPushed(1);

}