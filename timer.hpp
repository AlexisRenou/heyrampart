#ifndef TIMER_HPP
#define TIMER_HPP

#include <SFML/System.hpp>

class Timer {
public:

    Timer();

    void Start();
    void Pause();
    void Reinitialize();

    float GetTime();

private:
    enum State {Started, Paused};

    sf::Clock myClock;

    State myState;
    float myElapsedTime;
};

#endif
