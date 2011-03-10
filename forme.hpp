#ifndef FORME_HPP_INCLUDED
#define FORME_HPP_INCLUDED


#include <iostream>
#include <cstdlib>
#include "constantes.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class forme
{

    private:

    int IdForme;
    sf::Shape Forme;


    public:

    forme(int x=0);
    int GetIdForme(void);
    sf::Shape GetForme(int a, int b);
    //void DessinerForme(void);


};



#endif // FORME_HPP_INCLUDED
