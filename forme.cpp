

#include "forme.hpp"


using namespace sf;

forme::forme(int x)
{

    switch(x)
    {
        case 10:

        //
        // le L4        ****
        //              *

        Forme.AddPoint(20,0);
        Forme.AddPoint(20,60);
        Forme.AddPoint(40,60);
        Forme.AddPoint(40,40);
        Forme.AddPoint(60,40);
        Forme.AddPoint(60,20);
        Forme.AddPoint(40,20);
        Forme.AddPoint(40,0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(20,20);

        break;

        case 9:

        //               **
        // le L3          *
        //                *

        Forme.AddPoint(20,0);
        Forme.AddPoint(20,20);
        Forme.AddPoint(0,20);
        Forme.AddPoint(0,40);
        Forme.AddPoint(20,40);
        Forme.AddPoint(20,60);
        Forme.AddPoint(40,60);
        Forme.AddPoint(40,0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(20,20);

        break;

        case 8:

        //                 *
        // le L2        ****
        //

        Forme.AddPoint(0,20);
        Forme.AddPoint(0,40);
        Forme.AddPoint(80,40);
        Forme.AddPoint(80,00);
        Forme.AddPoint(60,00);
        Forme.AddPoint(60,20);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(20,20);

        break;

        case 7:

        //                *
        // le L1          *
        //                **

        Forme.AddPoint(0,0);
        Forme.AddPoint(0,80);
        Forme.AddPoint(40,80);
        Forme.AddPoint(40,60);
        Forme.AddPoint(20,60);
        Forme.AddPoint(20,0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(0,60);

        break;

        case 6:

        //                      **
        // le carre de 4 case   **
        //

        Forme.AddPoint(0,0);
        Forme.AddPoint(0,40);
        Forme.AddPoint(40,40);
        Forme.AddPoint(40,0);
        Forme.SetColor(Color(100,100,100,100));

        break;

        case 5:

        //                *
        // le T4          **
        //                *

        Forme.AddPoint(20,0);
        Forme.AddPoint(20,60);
        Forme.AddPoint(40,60);
        Forme.AddPoint(40,40);
        Forme.AddPoint(60,40);
        Forme.AddPoint(60,20);
        Forme.AddPoint(40,20);
        Forme.AddPoint(40,0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(20,20);

        break;

        case 4:

        //                *
        // le T3         **
        //                *

        Forme.AddPoint(20,0);
        Forme.AddPoint(20,20);
        Forme.AddPoint(0,20);
        Forme.AddPoint(0,40);
        Forme.AddPoint(20,40);
        Forme.AddPoint(20,60);
        Forme.AddPoint(40,60);
        Forme.AddPoint(40,0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(20,20);

        break;

        case 3:
        //
        // le T2         ***
        //                *

        Forme.AddPoint(0,20);
        Forme.AddPoint(0,40);
        Forme.AddPoint(20,40);
        Forme.AddPoint(20,60);
        Forme.AddPoint(40,60);
        Forme.AddPoint(40,40);
        Forme.AddPoint(60,40);
        Forme.AddPoint(60,20);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(20,20);

        break;

        case 2:

        //                *
        // le T1         ***
        //

        Forme.AddPoint(20,0);
        Forme.AddPoint(20,20);
        Forme.AddPoint(0,20);
        Forme.AddPoint(0,40);
        Forme.AddPoint(60,40);
        Forme.AddPoint(60,20);
        Forme.AddPoint(40,20);
        Forme.AddPoint(40,0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(20,20);

        break;

        case 1:

        //                *
        // la croix      ***
        //                *

        Forme.AddPoint(20,0);
        Forme.AddPoint(20,20);
        Forme.AddPoint(0,20);
        Forme.AddPoint(0,40);
        Forme.AddPoint(20,40);
        Forme.AddPoint(20,60);
        Forme.AddPoint(40,60);
        Forme.AddPoint(40,40);
        Forme.AddPoint(60,40);
        Forme.AddPoint(60,20);
        Forme.AddPoint(40,20);
        Forme.AddPoint(40,0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(20,20);

        break;

        case 0:

        //
        // le block d'une case  *
        //

        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 1, TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 1, TAILLE_CASE * 0);
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

//void forme::Dessiner
