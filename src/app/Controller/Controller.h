#ifndef CONTROLLER_H
#define CONTROLLER_H

#pragma once

#include <string>
#include "View.h"




class Controller
{
private:
    int lightState;
    View *view;

public:
    Controller(View *viewer);
    virtual ~Controller(); //virtual 다형성할때 필요
    void updateEvent(std::string strBtn);

};

#endif