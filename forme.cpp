#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "forme.hpp"
#include <iostream>
#include <cstdlib>

forme::forme(float x)
{
    IdForme = x;
}

int forme::GetIdForme(void)
{
    return Idforme;
}
