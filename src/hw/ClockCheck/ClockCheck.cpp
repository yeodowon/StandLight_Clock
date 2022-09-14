#include "ClockCheck.h"

ClockCheck::ClockCheck()
{
    prevSec= 0; // 시간 0으로 초기화
}

ClockCheck::~ClockCheck()
{

}

bool ClockCheck::isUpdate()
{
    time_t curSec = time(NULL); //현재 시간을 읽어온다.
    if (curSec == prevSec) 
    {
        return false;
    }
    else
    {
        prevSec = curSec;
        return true;
    }
    return false;
}