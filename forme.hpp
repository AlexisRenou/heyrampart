#ifndef FORME_HPP_INCLUDED
#define FORME_HPP_INCLUDED



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
    void DessinerForme(void);


};



#endif // FORME_HPP_INCLUDED