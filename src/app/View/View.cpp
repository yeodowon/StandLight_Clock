#include "View.h"
#include <wiringPi.h>

View::View(Led *led1, Led *led2, Led *led3, Led *led4, Led *led5, LCD *Lcd)
{
    light1 = led1;
    light2 = led2;
    light3 = led3;
    light4 = led4;
    light5 = led5;
    this->lcd = Lcd;
    lightState = LIGHT_OFF;
}

View::~View()
{
}

void View::setState(int state)
{
    lightState = state;
}

void View::lightView()
{
    switch (lightState)
    {
    case LIGHT_OFF:
        lightOff();
        break;
    case LIGHT_ON1:
        lightOn_1();
        break;
    case LIGHT_ON2:
        lightOn_2();
        break;
    case LIGHT_ON3:
        lightOn_3();
        break;
    case LIGHT_ON4:
        lightOn_4();
        break;
    case LIGHT_ON5:
        lightOn_5();
        break;
    }
}

void View::lightOn_1()
{
    light1->On();
    light2->Off();
    light3->Off();
    light4->Off();
    light5->Off();
}

void View::lightOn_2()
{
    light1->On();
    light2->On();
    light3->Off();
    light4->Off();
    light5->Off();
}

void View::lightOn_3()
{
    light1->On();
    light2->On();
    light3->On();
    light4->Off();
    light5->Off();
}

void View::lightOn_4()
{
    light1->On();
    light2->On();
    light3->On();
    light4->On();
    light5->Off();
}

void View::lightOn_5()
{
    light1->On();
    light2->On();
    light3->On();
    light4->On();
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

void View::lcdDisplay()
{
    char buff[30];
    sprintf(buff, "Light : %d", lightState);
    lcd->WriteStringXY(0, 0, buff);
}

void View::lcdView()
{
    switch (lightState)
    {
    case LIGHT_OFF:
        lcdDisplay();
        lcd->backLightOff();
        break;

    case LIGHT_ON1:
        lcdDisplay();
        lcd->backLightOn();
        break;

    case LIGHT_ON2:
        lcdDisplay();
        break;

    case LIGHT_ON3:
        lcdDisplay();

        break;

    case LIGHT_ON4:
        lcdDisplay();

        break;

    case LIGHT_ON5:
        lcdDisplay();

        break;
    }
}
