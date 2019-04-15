#include "Command.hpp"
#include "GarageDoor.hpp"

class GarageDoorCloseCommand : public Command {
    GarageDoor *garageDoor{nullptr};

public:
    GarageDoorCloseCommand(GarageDoor *garageDoor);
    ~GarageDoorCloseCommand();

    void execute() override;
};