#include "Service.h"

Service::Service(View *viewer)
{
    view = viewer;
    lightState = LIGHT_OFF;
}

Service::~Service()
{
}

void Service::updateState(std::string strState)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strState == "modeButton")
        {
            lightState = LIGHT_ON1;
            view->setState(lightState);
        }
        break;

    case LIGHT_ON1:
        if (strState == "modeButton")
        {
            lightState = LIGHT_ON2;
            view->setState(lightState);
        }
        if (strState == "powerButton")
        {
            lightState = LIGHT_OFF;
        }
        view->setState(lightState);
        break;

    case LIGHT_ON2:
        if (strState == "modeButton")
        {
            lightState = LIGHT_ON3;
            view->setState(lightState);
        }
        if (strState == "powerButton")
        {
            lightState = LIGHT_OFF;
        }
        view->setState(lightState);
        break;

    case LIGHT_ON3:
        if (strState == "modeButton")
        {
            lightState = LIGHT_ON4;
            view->setState(lightState);
        }
        if (strState == "powerButton")
        {
            lightState = LIGHT_OFF;
        }
        view->setState(lightState);
        break;

    case LIGHT_ON4:
        if (strState == "modeButton")
        {
            lightState = LIGHT_ON5;
            view->setState(lightState);
        }
        if (strState == "powerButton")
        {
            lightState = LIGHT_OFF;
        }
        view->setState(lightState);
        break;

    case LIGHT_ON5:
        if (strState == "modeButton")
        {
            lightState = LIGHT_OFF;
            view->setState(lightState);
        }
        if (strState == "powerButton")
        {
            lightState = LIGHT_OFF;
        }
        view->setState(lightState);
        break;
    }
}