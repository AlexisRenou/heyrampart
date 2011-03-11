#ifndef CASE_H_INCLUDED
#define CASE_H_INCLUDED

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <time.h>

class Square
{
    private:
    int s_posx;
    int s_posy;
    std::string s_type;
    bool s_occupe;


    public:
    Square();
    void modifier_tout(int posx, int posy, std::string type, bool occupe);
    void afficher_tout();
    bool verifier_occupe();
    void modifier_occuper();
};



#endif
