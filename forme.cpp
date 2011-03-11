

#include "forme.hpp"


using namespace sf;

forme::forme(int x)
{
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    Forme.AddPoint(0,0);
    DessinerForme(x);
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

void forme::DessinerForme(int a)
{
    IdForme = a;

    switch(a)
    {
        case 10:

        //
        // le L4        ****
        //              *

        Forme.SetPointPosition(1, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(2, TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.SetPointPosition(3, TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.SetPointPosition(4, TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.SetPointPosition(5, TAILLE_CASE * 4,TAILLE_CASE * 1);
        Forme.SetPointPosition(6, TAILLE_CASE * 4,TAILLE_CASE * 0);

        Forme.SetPointPosition(7, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(8, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(9, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(10, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(11, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(12, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 0);

        break;

        case 9:

        //               **
        // le L3          *
        //                *

        Forme.SetPointPosition(1, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(2, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(3, TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.SetPointPosition(4, TAILLE_CASE * 1,TAILLE_CASE * 4);
        Forme.SetPointPosition(5, TAILLE_CASE * 2,TAILLE_CASE * 4);
        Forme.SetPointPosition(6, TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.SetPointPosition(7, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(8, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(9, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(10, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(11, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(12, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 8:

        //                 *
        // le L2        ****
        //

        Forme.SetPointPosition(1, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(2, TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.SetPointPosition(3, TAILLE_CASE * 4,TAILLE_CASE * 2);
        Forme.SetPointPosition(4, TAILLE_CASE * 4,TAILLE_CASE * 0);
        Forme.SetPointPosition(5, TAILLE_CASE * 3,TAILLE_CASE * 0);
        Forme.SetPointPosition(6, TAILLE_CASE * 3,TAILLE_CASE * 1);

        Forme.SetPointPosition(7, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(8, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(9, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(10, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(11, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(12, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 7:

        //                *
        // le L1          *
        //                **

        Forme.SetPointPosition(1, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(2, TAILLE_CASE * 0,TAILLE_CASE * 4);
        Forme.SetPointPosition(3, TAILLE_CASE * 2,TAILLE_CASE * 4);
        Forme.SetPointPosition(4, TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.SetPointPosition(5, TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.SetPointPosition(6, TAILLE_CASE * 1,TAILLE_CASE * 0);

        Forme.SetPointPosition(7, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(8, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(9, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(10, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(11, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(12, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 0,TAILLE_CASE * 3);

        break;

        case 6:

        //                      **
        // le carre de 4 case   **
        //

        Forme.SetPointPosition(1, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(2, TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.SetPointPosition(3, TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.SetPointPosition(4, TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.SetPointPosition(5, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(6, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(7, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(8, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(9, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(10, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(11, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetPointPosition(12, TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 0,TAILLE_CASE * 0);

        break;

        case 5:

        //                *
        // le T4          **
        //                *

        Forme.SetPointPosition(1, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(2, TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.SetPointPosition(3, TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.SetPointPosition(4, TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.SetPointPosition(5, TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.SetPointPosition(6, TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.SetPointPosition(7, TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.SetPointPosition(8, TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.SetPointPosition(9, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(10, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(11, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(12, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 4:

        //                *
        // le T3         **
        //                *

        Forme.SetPointPosition(1, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(2, TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.SetPointPosition(3, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(4, TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.SetPointPosition(5, TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.SetPointPosition(6, TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.SetPointPosition(7, TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.SetPointPosition(8, TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.SetPointPosition(9, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(10, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(11, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(12, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 3:
        //
        // le T2         ***
        //                *

        Forme.SetPointPosition(1, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(2, TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.SetPointPosition(3, TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.SetPointPosition(4, TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.SetPointPosition(5, TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.SetPointPosition(6, TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.SetPointPosition(7, TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.SetPointPosition(8, TAILLE_CASE * 3,TAILLE_CASE * 1);

        Forme.SetPointPosition(9, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(10, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(11, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(12, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 2:

        //                *
        // le T1         ***
        //

        Forme.SetPointPosition(1, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(2, TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.SetPointPosition(3, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(4, TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.SetPointPosition(5, TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.SetPointPosition(6, TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.SetPointPosition(7, TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.SetPointPosition(8, TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.SetPointPosition(9, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(10, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(11, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(12, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 1:

        //                *
        // la croix      ***
        //                *

        Forme.SetPointPosition(1, TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetPointPosition(2, TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.SetPointPosition(3, TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetPointPosition(4, TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.SetPointPosition(5, TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.SetPointPosition(6, TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.SetPointPosition(7, TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.SetPointPosition(8, TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.SetPointPosition(9, TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.SetPointPosition(10, TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.SetPointPosition(11, TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.SetPointPosition(12, TAILLE_CASE * 2,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 0:

        //
        // le block d'une case  *
        //




        Forme.SetPointPosition(1, TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetPointPosition(2, TAILLE_CASE * 0, TAILLE_CASE * 1);
        Forme.SetPointPosition(3, TAILLE_CASE * 1, TAILLE_CASE * 1);
        Forme.SetPointPosition(4, TAILLE_CASE * 1, TAILLE_CASE * 0);

        Forme.SetPointPosition(5, TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetPointPosition(6, TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetPointPosition(7, TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetPointPosition(8, TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetPointPosition(9, TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetPointPosition(10, TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetPointPosition(11, TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetPointPosition(12, TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 0,TAILLE_CASE * 0);

        break;
    }
}
