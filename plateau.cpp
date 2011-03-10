#include "plateau.hpp"

using namespace std;

Plateau::Plateau()
{
    for (int i=0 ; i<100 ; i++)
    {
        for (int j=0 ; j<100 ; j++)
        {
            p_square[i][j].modifier_tout(i, j, "terre", true);
        }
    }
}

void Plateau::afficher_plateau()
{
    for (int i=0 ; i<100 ; i++)
    {
        for (int j = 0 ; j<100 ; j++)
        {
            p_square[i][j].afficher_tout();
            cout << " " ;
        }
        cout << " " << endl;
    }
}
