#pragma once

#include <memory>
#include <iostream>
#include <string>

class Command {
public:
    virtual void execute() = 0;
    virtual std::string type() = 0;
};

class NoCommand : public Command {
public:
    void execute() override { std::cout << "No Command" << std::endl; }
    std::string type() override { return std::string("NoCommand"); }
};

