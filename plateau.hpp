#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "case.hpp"
#include "constantes.hpp"

class Plateau
{
    private:
    Square p_square[LONGUEUR_PLATEAU][LONGUEUR_PLATEAU];

    public:
    Plateau();
    void afficher_plateau();
};



#endif
