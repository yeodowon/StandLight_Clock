#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Led.h"

#pragma once

enum {LIGHT_OFF, LIGHT_ON1, LIGHT_ON2, LIGHT_ON3, LIGHT_ON4, LIGHT_ON5};

class View
{
private:
    int lightState;
    Led *light1, *light2, *light3, *light4, *light5;

public:
    View(Led *Led1, Led *Led2, Led *Led3, Led *Led4, Led *Led5);
    virtual~View();
    void lightView();
    void updateState(std::string strState);
    void lightOn1();
    void lightOn2();
    void lightOn3();
    void lightOn4();
    void lightOn5();
    void lightOff();
};

#endif