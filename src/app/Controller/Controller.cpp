#include "Controller.h"

Controller::Controller(Service *Serv,  ClockService *clockServ)
{
    service = Serv;
    clockService = clockServ;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{

    if (strBtn == "modeButton")
    {
        service->updateState("modeButton");
    }
     if (strBtn == "powerButton")
    {
        service->updateState("powerButton");
    }
      if (strBtn == "clockUpdate")
    {
        clockService->updateEvent();
    }
}