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
    sf::Image ImageRampart;
    sf::Sprite Rampart1;
    sf::Sprite Rampart2;
    sf::Sprite Rampart3;
    sf::Sprite Rampart4;
    sf::Sprite Rampart5;
    bool Ramp1;
    bool Ramp2;
    bool Ramp3;
    bool Ramp4;
    bool Ramp5;

    public:

    forme(int x=0);
    int GetIdForme(void);
    sf::Shape GetForme(int a, int b);
    void DessinerForme(int a);
    void DefinirForme(int a);
    sf::Sprite GetRampart1(int x, int y);
    sf::Sprite GetRampart2(int x, int y);
    sf::Sprite GetRampart3(int x, int y);
    sf::Sprite GetRampart4(int x, int y);
    sf::Sprite GetRampart5(int x, int y);
    bool IsRampart1(void);
    bool IsRampart2(void);
    bool IsRampart3(void);
    bool IsRampart4(void);
    bool IsRampart5(void);


};



#endif // FORME_HPP_INCLUDED
