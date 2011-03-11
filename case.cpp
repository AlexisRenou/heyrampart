#include "case.hpp"

using namespace std;


Square::Square()
{
    s_posx = 0;
    s_posy = 0;
    s_type = "";
    s_occupe = true;
}


void Square::modifier_tout(int posx, int posy, string type, bool occupe)
{
    s_posx = posx;
    s_posy = posy;
    s_type = type;
    s_occupe = occupe;
}

void Square::modifier_type(string type)
{
    s_type = type;
}

void Square::afficher_tout()
{
    cout << s_posx << " " << s_posy << " " << s_type << " " << s_occupe;
}

bool Square::verifier_occupe()
{
    return s_occupe;
}

void Square::modifier_occuper()
{
    s_occupe = true;
}
