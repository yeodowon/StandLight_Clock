#include "View.h"
#include <wiringPi.h>

View::View(Led *Led1, Led *Led2, Led *Led3, Led *Led4, Led *Led5)
{
    light1 = Led1;
    light2 = Led2;
    light3 = Led3;
    light4 = Led4;
    light5 = Led5;
    lightState = LIGHT_OFF;
}

View::~View()
{
}

void View::updateState(std::string strState)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        lightOff();
        if (strState == "StateOn1")
        {
            lightState = LIGHT_ON1;
        }
        break;

    case LIGHT_ON1:
        lightOn1();
        if (strState == "StateOn2")
        {
            lightState = LIGHT_ON2;
        }
        break;

    case LIGHT_ON2:
        lightOn2();
        if (strState == "StateOn3")
        {
            lightState = LIGHT_ON3;
        }
        break;

    case LIGHT_ON3:
        lightOn3();
        if (strState == "StateOn4")
        {
            lightState = LIGHT_ON4;
        }
        break;

    case LIGHT_ON4:
        lightOn4();
        if (strState == "StateOn5")
        {
            lightState = LIGHT_ON5;
        }
        break;

    case LIGHT_ON5:
        lightOn5();
        if (strState == "StateOff")
        {
            lightState = LIGHT_OFF;
        }
        break;
    }
}

void View::lightView()
{
    switch (lightState)
    {
    case LIGHT_OFF:
        lightOff();

        break;

    case LIGHT_ON1:
        lightOn1();

        break;

    case LIGHT_ON2:
        lightOn2();

        break;

    case LIGHT_ON3:
        lightOn3();

        break;

    case LIGHT_ON4:
        lightOn4();

        break;

    case LIGHT_ON5:
        lightOn5();

        break;
    }
}

void View::lightOn1()
{
    light1->On();
}

void View::lightOn2()
{
    light2->On();
}

void View::lightOn3()
{
    light3->On();
}

void View::lightOn4()
{
    light4->On();
}

void View::lightOn5()
{
    light5->On();
}

void View::lightOff()
{
    light1->Off();
    light2->Off();
    light3->Off();
    light4->Off();
    light5->Off();
}