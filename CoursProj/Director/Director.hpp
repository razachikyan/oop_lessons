#pragma once
#include "./Action/Action.hpp"

class Director {
public:
    Director() {};

    void undo();
    void redo();
    void add(Action action);
};
