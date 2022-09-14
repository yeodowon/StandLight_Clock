#include "Controller.h"

Controller::Controller(View *viewer)
{
    view = viewer;          //이름을 viewer로 하겠다.
    lightState = LIGHT_OFF; //초기화
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT_ON1;
            view->updateState("StateOn1");
        }
        break;
    case LIGHT_ON1:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT_ON2;
            view->updateState("StateOn2");
            break;
        }
    case LIGHT_ON2:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT_ON3;
            view->updateState("StateOn3");
            break;
        }
    case LIGHT_ON3:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT_ON4;
            view->updateState("StateOn4");
            break;
        }
    case LIGHT_ON4:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT_ON5;
            view->updateState("StateOn5");
            break;
        }
    case LIGHT_ON5:
        if (strBtn == "powerButton")
        {
            lightState = LIGHT_OFF;
            view->updateState("StateOff");
            break;
        }
    }
}