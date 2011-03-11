#include "plateau.hpp"

using namespace std;

Plateau::Plateau()
{// j = x  et i = y
    for (int i=0 ; i<LONGUEUR_PLATEAU ; i++)
    {
        for (int j=0 ; j<LONGUEUR_PLATEAU ; j++)
        {
            p_square[i][j].modifier_tout(i, j, "terre", false);
        }
    }
}
void Plateau::creer_types()
{
    // Zone de la Foret, Inconstructible
    for (int i=0 ; i<15 ; i++)
    {
        for (int j=0 ; j<5 ; j++)
        {
            p_square[i][j].modifier_type("foret");
        }
    }
        for (int i=0 ; i<12 ; i++)
    {
        for (int j=5 ; j<8 ; j++)
        {
            p_square[i][j].modifier_type("foret");
        }
    }
        for (int i=0 ; i<7 ; i++)
    {
        for (int j=8 ; j<11 ; j++)
        {
            p_square[i][j].modifier_type("foret");
        }
    }
        for (int i=0 ; i<2 ; i++)
    {
        for (int j=11 ; j<13 ; j++)
        {
            p_square[i][j].modifier_type("foret");
        }
    }
    p_square[12][5].modifier_type("foret");
    p_square[13][5].modifier_type("foret");
    p_square[7][8].modifier_type("foret");
    p_square[8][8].modifier_type("foret");
    p_square[9][8].modifier_type("foret");
    p_square[7][9].modifier_type("foret");
    p_square[2][11].modifier_type("foret");
    p_square[3][11].modifier_type("foret");
    p_square[0][13].modifier_type("foret");
}

void Plateau::afficher_plateau()
{
    for (int i=0 ; i<LONGUEUR_PLATEAU ; i++)
    {
        for (int j=0 ; j<5 ; j++)
        {
            p_square[i][j].modifier_tout(i, j, "foret", true);
        }
    }
        for (int i=0 ; i<12 ; i++)
    {
        for (int j=5 ; j<8 ; j++)
        {
            p_square[i][j].modifier_tout(i, j, "foret", true);
        }
    }
        for (int i=0 ; i<7 ; i++)
    {
        for (int j=8 ; j<11 ; j++)
        {
            p_square[i][j].modifier_tout(i, j, "foret", true);
        }
    }
        for (int i=0 ; i<2 ; i++)
    {
        for (int j=11 ; j<13 ; j++)
        {
            p_square[i][j].modifier_tout(i, j, "foret", true);
        }
    }
    p_square[12][5].modifier_tout(i, j, "foret", true);
    p_square[13][5].modifier_tout(i, j, "foret", true);
    p_square[7][8].modifier_tout(i, j, "foret", true);
    p_square[8][8].modifier_tout(i, j, "foret", true);
    p_square[9][8].modifier_tout(i, j, "foret", true);
    p_square[7][9].modifier_tout(i, j, "foret", true);
    p_square[2][11].modifier_tout(i, j, "foret", true);
    p_square[3][11].modifier_tout(i, j, "foret", true);
    p_square[0][13].modifier_tout(i, j, "foret", true);
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
