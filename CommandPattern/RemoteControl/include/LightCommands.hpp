#include "Command.hpp"
#include "Light.hpp"


class LightOnCommand : public Command {

    Light* light{nullptr};

public:
    LightOnCommand(Light *light);
    ~LightOnCommand();
    
    void execute() override; 

};

class LightOffCommand : public Command {
    Light *light{nullptr};

public:
    LightOffCommand(Light *light);
    ~LightOffCommand();

    void execute() override;

};