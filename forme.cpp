#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "forme.hpp"
#include <iostream>
#include <cstdlib>

using namespace sf;

forme::forme(int x)
{

    switch(x)
    {
        case 0:

        //
        // le block d'une case  *
        //

        Forme.AddPoint(0,0);
        Forme.AddPoint(0,15);
        Forme.AddPoint(15,15);
        Forme.AddPoint(15,0);
        Forme.SetColor(Color(100,100,100,100));

        break;
    }

    IdForme = x;
}

int forme::GetIdForme(void)
{
    return IdForme;
}

sf::Shape forme::GetForme(int a, int b)
{
    Forme.SetPosition(a,b);
    return Forme;
}
