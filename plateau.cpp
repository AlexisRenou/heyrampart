#include "plateau.hpp"

using namespace std;

Plateau::Plateau()
{
    for (int i=0 ; i<LONGUEUR_PLATEAU ; i++)
    {
        for (int j=0 ; j<LONGUEUR_PLATEAU ; j++)
        {
            p_square[i][j].modifier_tout(i, j, "terre", false);
        }
    }
}

void Plateau::afficher_plateau()
{
    for (int i=0 ; i<LONGUEUR_PLATEAU ; i++)
    {
        for (int j = 0 ; j<LONGUEUR_PLATEAU ; j++)
        {
            p_square[i][j].afficher_tout();
            cout << " " ;
        }
        cout << " " << endl;
    }
}

bool Plateau::colorier_case(int i, int j)
{
    /*
    for (int i=0 ; i<LONGUEUR_PLATEAU ; i++)
    {
        for (int j = 0 ; j<LONGUEUR_PLATEAU ; j++)
        {
            if (p_square[i][j].verifier_occupe())
            {
                block.SetPosition(i*15,j*15);
                block.SetColor(sf::Color(100,100,100));
                app.Draw(block);
                block.SetColor(sf::Color(100,100,100,100));
            }
        }
        cout << " " << endl;
    }*/

    return p_square[i][j].verifier_occupe();
}

void Plateau::modifier_ocase(int i, int j)
{
    p_square[i][j].modifier_occuper();
}
