#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
//#include <time.h>
#include "case.hpp"
#include "constantes.hpp"
#include "forme.hpp"
//#include "fonction.hpp"

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
    forme MAJTableau(int NumeroForme, int MouseX, int MouseY, forme muraille, int aleatoire);
    void Verifier_fermement();
    bool est_fermee(int i,int j);
    Square Get_Square(int i, int j);
};



#endif

