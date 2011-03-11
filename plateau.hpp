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
    bool colorier_case(int i,int j);
    bool verifier_case(int i,int j);
    void modifier_ocase(int i, int j);
    void creer_types();
};



#endif

