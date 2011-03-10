#include "plateau.hpp"

using namespace std;

Plateau::Plateau()
{
    for (int i=0 ; i<LONGUEUR_PLATEAU ; i++)
    {
        for (int j=0 ; j<LONGUEUR_PLATEAU ; j++)
        {
            p_square[i][j].modifier_tout(i, j, "terre", true);
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
