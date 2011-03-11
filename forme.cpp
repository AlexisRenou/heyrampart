

#include "forme.hpp"


using namespace sf;

forme::forme(int x)
{
    if (!ImageRampart.LoadFromFile("images/rampart.png")) // Si le chargement du fichier a échoué
    {
        //return EXIT_FAILURE; // On ferme le programme
    }
    else // Si le chargement de l'image a réussi
    {


        Rampart1.SetImage(ImageRampart);
        Rampart2.SetImage(ImageRampart);
        Rampart3.SetImage(ImageRampart);
        Rampart4.SetImage(ImageRampart);
        Rampart5.SetImage(ImageRampart);

        Rampart1.SetColor(sf::Color(255,255,255,128));
        Rampart2.SetColor(sf::Color(255,255,255,128));
        Rampart3.SetColor(sf::Color(255,255,255,128));
        Rampart4.SetColor(sf::Color(255,255,255,128));
        Rampart5.SetColor(sf::Color(255,255,255,128));
    }
    /*Forme.AddPoint(0,0);
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
    Forme.AddPoint(0,0);*/

    //DessinerForme(x);
    DefinirForme(x);
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

void forme::DefinirForme(int a)
{
    IdForme = a;
    switch(a)
    {
        case 10:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = true;

        break;

        case 9:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = true;

        break;

        case 8:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = true;

        break;

        case 7:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = true;

        break;

        case 6:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = false;

        break;

        case 5:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = false;

        break;

        case 4:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = false;

        break;

        case 3:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = false;

        break;

        case 2:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = false;

        break;

        case 1:

            Ramp1 = true;
            Ramp2 = true;
            Ramp3 = true;
            Ramp4 = true;
            Ramp5 = true;

        break;

        case 0:

            Ramp1 = true;
            Ramp2 = false;
            Ramp3 = false;
            Ramp4 = false;
            Ramp5 = false;

        break;

    }
}

sf::Sprite forme::GetRampart1(int x, int y)
{
    Rampart1.SetPosition(x,y);
    return Rampart1;
}

sf::Sprite forme::GetRampart2(int x, int y)
{
    switch(IdForme)
    {
        case 10:

            Rampart2.SetPosition(x+TAILLE_CASE,y);

        break;

        case 9:

            Rampart2.SetPosition(x-TAILLE_CASE,y-TAILLE_CASE);

        break;

        case 8:

            Rampart2.SetPosition(x+TAILLE_CASE,y);

        break;

        case 7:

            Rampart2.SetPosition(x+TAILLE_CASE,y);

        break;

        case 6:

            Rampart2.SetPosition(x+TAILLE_CASE,y);

        break;

        case 5:

            Rampart2.SetPosition(x+TAILLE_CASE,y);

        break;

        case 4:

            Rampart2.SetPosition(x-TAILLE_CASE,y);

        break;

        case 3:

            Rampart2.SetPosition(x+TAILLE_CASE,y);

        break;

        case 2:

            Rampart2.SetPosition(x+TAILLE_CASE,y);

        break;

        case 1:

            Rampart2.SetPosition(x+TAILLE_CASE,y);

        break;

        case 0:
        break;

    }
    return Rampart2;
}

sf::Sprite forme::GetRampart3(int x, int y)
{
    switch(IdForme)
    {
        case 10:

            Rampart3.SetPosition(x-TAILLE_CASE,y);

        break;

        case 9:

            Rampart3.SetPosition(x,y-TAILLE_CASE);

        break;

        case 8:

            Rampart3.SetPosition(x-TAILLE_CASE,y);

        break;

        case 7:

            Rampart3.SetPosition(x,y-TAILLE_CASE);

        break;

        case 6:

            Rampart3.SetPosition(x,y+TAILLE_CASE);

        break;

        case 5:

            Rampart3.SetPosition(x,y+TAILLE_CASE);

        break;

        case 4:

            Rampart3.SetPosition(x,y+TAILLE_CASE);

        break;

        case 3:

            Rampart3.SetPosition(x-TAILLE_CASE,y);

        break;

        case 2:

            Rampart3.SetPosition(x-TAILLE_CASE,y);

        break;

        case 1:

            Rampart3.SetPosition(x-TAILLE_CASE,y);

        break;

        case 0:
        break;

    }
    return Rampart3;
}

sf::Sprite forme::GetRampart4(int x, int y)
{
    switch(IdForme)
    {
        case 10:

            Rampart4.SetPosition(x-TAILLE_CASE,y+TAILLE_CASE);

        break;

        case 9:

            Rampart4.SetPosition(x,y+TAILLE_CASE);

        break;

        case 8:

            Rampart4.SetPosition(x+TAILLE_CASE*2,y);

        break;

        case 7:

            Rampart4.SetPosition(x,y-TAILLE_CASE*2);

        break;

        case 6:

            Rampart4.SetPosition(x+TAILLE_CASE,y+TAILLE_CASE);

        break;

        case 5:

            Rampart4.SetPosition(x,y-TAILLE_CASE);

        break;

        case 4:

            Rampart4.SetPosition(x,y-TAILLE_CASE);

        break;

        case 3:

            Rampart4.SetPosition(x,y+TAILLE_CASE);

        break;

        case 2:

            Rampart4.SetPosition(x,y-TAILLE_CASE);

        break;

        case 1:

            Rampart4.SetPosition(x,y-TAILLE_CASE);

        break;

        case 0:
        break;

    }
    return Rampart4;
}

sf::Sprite forme::GetRampart5(int x, int y)
{
    switch(IdForme)
    {
        case 10:

            Rampart5.SetPosition(x+TAILLE_CASE*2,y);

        break;

        case 9:

            Rampart5.SetPosition(x,y+TAILLE_CASE*2);

        break;

        case 8:

            Rampart5.SetPosition(x+TAILLE_CASE*2,y-TAILLE_CASE);

        break;

        case 7:

            Rampart5.SetPosition(x,y-TAILLE_CASE*3);

        break;

        case 6:
        break;

        case 5:
        break;

        case 4:
        break;

        case 3:
        break;

        case 2:
        break;

        case 1:

            Rampart5.SetPosition(x,y+TAILLE_CASE);

        break;

        case 0:
        break;

    }
    return Rampart5;
}

bool forme::IsRampart1(void)
{
    return Ramp1;
}

bool forme::IsRampart2(void)
{
    return Ramp2;
}

bool forme::IsRampart3(void)
{
    return Ramp3;
}

bool forme::IsRampart4(void)
{
    return Ramp4;
}

bool forme::IsRampart5(void)
{
    return Ramp5;
}
