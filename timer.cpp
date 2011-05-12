#include "Timer.hpp"

Timer::Timer(int Temps)
{
    myElapsedTime = Temps;
    myState = Paused;
}

void Timer::Start()
{
    if(myState != Started) // On ne lance pas le timer si il est déja lancé
    {
        myClock.Reset();
        myState = Started;
    }
}

void Timer::Pause()
{
    if(myState != Paused) // On ne mets pas en pause le timer si il est déja en pause
    {
        myState = Paused;
        myElapsedTime -= myClock.GetElapsedTime();
    }
}

void Timer::Reinitialize()
{
    myClock.Reset();
    Pause();
    myElapsedTime = 20;
}

float Timer::GetTime()
{
    float time;

    if(myState == Paused)
    {
        time = myElapsedTime;
    }

    else
    {
        time = myElapsedTime - myClock.GetElapsedTime();
    }


    return time;
}
