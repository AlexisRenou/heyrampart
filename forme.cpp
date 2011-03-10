

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

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 9:

        //               **
        // le L3          *
        //                *

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 8:

        //                 *
        // le L2        ****
        //

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 4,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 4,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 7:

        //                *
        // le L1          *
        //                **

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 4);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 4);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 0,TAILLE_CASE * 3);

        break;

        case 6:

        //                      **
        // le carre de 4 case   **
        //

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));

        break;

        case 5:

        //                *
        // le T4          **
        //                *

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 4:

        //                *
        // le T3         **
        //                *

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 3:
        //
        // le T2         ***
        //                *

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 2:

        //                *
        // le T1         ***
        //

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 1:

        //                *
        // la croix      ***
        //                *

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

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

void forme::DessinerForme(int a)
{
    switch(a)
    {
        case 10:

        //
        // le L4        ****
        //              *

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 4,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 4,TAILLE_CASE * 0);

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 9:

        //               **
        // le L3          *
        //                *

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 4);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 4);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 8:

        //                 *
        // le L2        ****
        //

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 4,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 4,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 7:

        //                *
        // le L1          *
        //                **

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 4);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 4);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 0,TAILLE_CASE * 3);

        break;

        case 6:

        //                      **
        // le carre de 4 case   **
        //

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));

        break;

        case 5:

        //                *
        // le T4          **
        //                *

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 4:

        //                *
        // le T3         **
        //                *

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 3:
        //
        // le T2         ***
        //                *

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);

        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 2:

        //                *
        // le T1         ***
        //

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 1:

        //                *
        // la croix      ***
        //                *

        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 3);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 2);
        Forme.AddPoint(TAILLE_CASE * 3,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 2,TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));
        Forme.SetCenter(TAILLE_CASE * 1,TAILLE_CASE * 1);

        break;

        case 0:

        //
        // le block d'une case  *
        //

        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 1, TAILLE_CASE * 1);
        Forme.AddPoint(TAILLE_CASE * 1, TAILLE_CASE * 0);

        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.AddPoint(TAILLE_CASE * 0, TAILLE_CASE * 0);
        Forme.SetColor(Color(100,100,100,100));

        break;
    }
}
