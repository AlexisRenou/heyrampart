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

    //************** Zone du Chateau, Inconstructible ****************
    for (int i=22 ; i<27 ; i++)
        {
            for (int j=18 ; j<23 ; j++)
            {
                p_square[i][j].modifier_type("chateau");
            }
        }

//**************  Zone Hybrid  , Inconstructible ****************

    for (int i=43 ; i<49 ; i++)
        {
            for (int j=22 ; j<24 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=40 ; i<49 ; i++)
        {
            for (int j=24 ; j<26 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=58 ; i<60 ; i++)
        {
            for (int j=24 ; j<26 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=39 ; i<60 ; i++)
        {
            for (int j=26 ; j<28 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=39 ; i<57 ; i++)
        {
            for (int j=28 ; j<29 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=41 ; i<51 ; i++)
        {
            for (int j=29 ; j<30 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=41 ; i<49 ; i++)
        {
            for (int j=30 ; j<31 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=44 ; i<49 ; i++)
        {
            for (int j=31 ; j<35 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=37 ; i<49 ; i++)
        {
            for (int j=35 ; j<36 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=37 ; i<46 ; i++)
        {
            for (int j=36 ; j<37 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=37 ; i<44 ; i++)
        {
            for (int j=37 ; j<38 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=37 ; i<41 ; i++)
        {
            for (int j=38 ; j<41 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=28 ; i<41 ; i++)
        {
            for (int j=41 ; j<42 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=19 ; i<41 ; i++)
        {
            for (int j=42 ; j<44 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=19 ; i<32 ; i++)
        {
            for (int j=44 ; j<45 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=19 ; i<30 ; i++)
        {
            for (int j=45 ; j<46 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=17 ; i<28 ; i++)
        {
            for (int j=46 ; j<47 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=36 ; i<41 ; i++)
        {
            for (int j=44 ; j<47 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=17 ; i<24 ; i++)
        {
            for (int j=47 ; j<49 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=19 ; i<24 ; i++)
        {
            for (int j=49 ; j<50 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=29 ; i<33 ; i++)
        {
            for (int j=49 ; j<50 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=22 ; i<35 ; i++)
        {
            for (int j=50 ; j<51 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=22 ; i<29 ; i++)
        {
            for (int j=51 ; j<52 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=23 ; i<26 ; i++)
        {
            for (int j=52 ; j<55 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=32 ; i<35 ; i++)
        {
            for (int j=51 ; j<55 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=32 ; i<37 ; i++)
        {
            for (int j=55 ; j<57 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=30 ; i<37 ; i++)
        {
            for (int j=57 ; j<58 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }
    for (int i=30 ; i<34 ; i++)
        {
            for (int j=58 ; j<60 ; j++)
            {
                p_square[i][j].modifier_type("hybrid");
            }
        }


//************** Zone de l'eau , Inconstructible ****************
    for (int i=57 ; i<60 ; i++)
        {
            for (int j=28 ; j<29 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=51 ; i<60 ; i++)
        {
            for (int j=29 ; j<30 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=49 ; i<60 ; i++)
        {
            for (int j=30 ; j<36 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=46 ; i<60 ; i++)
        {
            for (int j=36 ; j<37 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=44 ; i<60 ; i++)
        {
            for (int j=37 ; j<38 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=41 ; i<60 ; i++)
        {
            for (int j=38 ; j<47 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=32 ; i<36 ; i++)
        {
            for (int j=44 ; j<45 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=30 ; i<36 ; i++)
        {
            for (int j=45 ; j<46 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=28 ; i<36 ; i++)
        {
            for (int j=46 ; j<47 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=24 ; i<60 ; i++)
        {
            for (int j=47 ; j<49 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=24 ; i<29 ; i++)
        {
            for (int j=49 ; j<50 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=33 ; i<60 ; i++)
        {
            for (int j=49 ; j<50 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=35 ; i<60 ; i++)
        {
            for (int j=50 ; j<55 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=37 ; i<39 ; i++)
        {
            for (int j=55 ; j<58 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=34 ; i<39 ; i++)
        {
            for (int j=58 ; j<60 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
    for (int i=51 ; i<60 ; i++)
        {
            for (int j=55 ; j<60 ; j++)
            {
                p_square[i][j].modifier_type("eau");
            }
        }
}

void Plateau::afficher_plateau()
{
    for (int i=0 ; i<LONGUEUR_PLATEAU ; i++)
    {
        for (int j=0 ; j<LONGUEUR_PLATEAU ; j++)
        {
            p_square[i][j].afficher_tout();
        }
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

bool Plateau::verifier_case(int i, int j)
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
    bool retour1;
    retour1 = p_square[i][j].verifier_occupe();
    string retour2;
    retour2 = p_square[i][j].envoyer_type();

    if (retour1 == false && retour2 == "terre")
    {
        return retour1;
    }
}

void Plateau::modifier_ocase(int i, int j)
{
    p_square[i][j].modifier_occuper();
}

forme Plateau::MAJTableau(int NumeroForme, int MouseX, int MouseY, forme muraille, int aleatoire)
{
    switch(NumeroForme)
    {
        case 10:
            if( verifier_case((MouseX/TAILLE_CASE)+2,MouseY/TAILLE_CASE) == false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
                verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false &&
                verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >=0 &&
                verifier_case((MouseX/TAILLE_CASE)-1,(MouseY/TAILLE_CASE)+1) == false &&
                verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) ==false)
            {

                modifier_ocase((MouseX/TAILLE_CASE)-1,(MouseY/TAILLE_CASE)+1);
                modifier_ocase((MouseX/TAILLE_CASE)+2,MouseY/TAILLE_CASE);
                modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
                modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
                modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

                muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 9:
            if(verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1) == false && (MouseY/TAILLE_CASE-1) >= 0 &&
                verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+2) == false &&
                verifier_case((MouseX/TAILLE_CASE)-1,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE+3) <= LONGUEUR_PLATEAU &&
                verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false &&
                verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) ==false)
            {

                modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);
                modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+2);
                modifier_ocase((MouseX/TAILLE_CASE)-1,(MouseY/TAILLE_CASE)-1);
                modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
                modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

                muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 8:
            if(verifier_case((MouseX/TAILLE_CASE)+2,(MouseY/TAILLE_CASE)-1) == false && (MouseX/TAILLE_CASE+3) <= LONGUEUR_PLATEAU && (MouseY/TAILLE_CASE-1) >= 0 &&
                verifier_case((MouseX/TAILLE_CASE)+2,MouseY/TAILLE_CASE) == false &&
                verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >=0 &&
                verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false &&
                verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) ==false)
            {

                modifier_ocase((MouseX/TAILLE_CASE)+2,(MouseY/TAILLE_CASE)-1);
                modifier_ocase((MouseX/TAILLE_CASE)+2,MouseY/TAILLE_CASE);
                modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
                modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
                modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

                muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 7:
            if(verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-2) == false &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-3) == false && (MouseY/TAILLE_CASE-3) >= 0 &&
            verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false &&
            verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false)
            {

            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-2);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-3);
            modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
            modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

            muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 6:
            if(verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false &&
            verifier_case((MouseX/TAILLE_CASE)+1,(MouseY/TAILLE_CASE)+1) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1) == false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)+1,(MouseY/TAILLE_CASE)+1);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 5:
            if(verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE-1) >= 0 &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1) == false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 4:
            if(verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >= 0 &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE-1) >= 0 &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1) == false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 3:
            if(verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >= 0 &&
            verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1)== false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 2:
            if(verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >= 0 &&
            verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE-1) >= 0)
            {
            modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);

            muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 1:
            if(verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >= 0 &&
            verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE-1) >= 0 &&
            verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1)== false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
            modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
            modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;

        case 0:
            if(verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false)
            {
            modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

            muraille.DefinirForme(aleatoire);  // On récupère une forme aléatoire
            }
            break;
    }
    return muraille;
}

void Plateau::Verifier_fermement()
{
    int tableau_tmp[LONGUEUR_PLATEAU][LONGUEUR_PLATEAU];
    int i = 0;
    int j = 0;

    for (i;i<LONGUEUR_PLATEAU;i++)
    {
        for (j;j<LONGUEUR_PLATEAU;j++)
        {
            tableau_tmp[i][j] = 0;
        }
        j = 0;
    }
    //j = x , i = y
    i = 0;
    j = 0;

    //initialisation !!!

    for(i;i<LONGUEUR_PLATEAU;i++)
    {
        if(p_square[i][0].verifier_occupe() == false)
        {
            tableau_tmp[i][0] = 1;
        }
        if(p_square[i][LONGUEUR_PLATEAU-1].verifier_occupe() == false)
        {
            tableau_tmp[i][LONGUEUR_PLATEAU-1] = 1;
        }
    }

    for(j;j<LONGUEUR_PLATEAU;j++)
    {
        if(p_square[0][j].verifier_occupe() == false)
        {
            tableau_tmp[0][j] = 1;
        }
        if(p_square[LONGUEUR_PLATEAU-1][j].verifier_occupe() == false)
        {
            tableau_tmp[LONGUEUR_PLATEAU-1][j] = 1;
        }
    }

    // 1ère vague, gauche à droite !
    j = 1;
    for(j;j<LONGUEUR_PLATEAU;j++)
    {
        i = 0;
        for(i;i<LONGUEUR_PLATEAU;i++)
        {
            if(i == 0)
            {
                if(((tableau_tmp[i][j-1] == 1) || (tableau_tmp[i+1][j-1] == 1) || (tableau_tmp[i+1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(i == LONGUEUR_PLATEAU-1)
            {
                if(((tableau_tmp[i-1][j-1] == 1) || (tableau_tmp[i][j-1] == 1) || (tableau_tmp[i-1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(((tableau_tmp[i-1][j-1] == 1) || (tableau_tmp[i][j-1] == 1) || (tableau_tmp[i+1][j-1] == 1) || (tableau_tmp[i-1][j] == 1) || (tableau_tmp[i+1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
            {
                tableau_tmp[i][j] = 1;
            }
        }
        i--;
        for(i;i>=0;i--)
        {
            if(i == 0)
            {
                if(((tableau_tmp[i][j-1] == 1) || (tableau_tmp[i+1][j-1] == 1) || (tableau_tmp[i+1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(i == LONGUEUR_PLATEAU-1)
            {
                if(((tableau_tmp[i-1][j-1] == 1) || (tableau_tmp[i][j-1] == 1) || (tableau_tmp[i-1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(((tableau_tmp[i-1][j-1] == 1) || (tableau_tmp[i][j-1] == 1) || (tableau_tmp[i+1][j-1] == 1) || (tableau_tmp[i-1][j] == 1) || (tableau_tmp[i+1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
            {
                tableau_tmp[i][j] = 1;
            }
        }
    }

    // 2ème vague, droite à gauche !
    j = LONGUEUR_PLATEAU-2;
    for(j;j>=0;j--)
    {
        i = 0;
        for(i;i<LONGUEUR_PLATEAU;i++)
        {
            if(i == 0)
            {
                if(((tableau_tmp[i][j+1] == 1) || (tableau_tmp[i+1][j+1] == 1) || (tableau_tmp[i+1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(i == LONGUEUR_PLATEAU-1)
            {
                if(((tableau_tmp[i-1][j+1] == 1) || (tableau_tmp[i][j+1] == 1) || (tableau_tmp[i-1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(((tableau_tmp[i-1][j+1] == 1) || (tableau_tmp[i][j+1] == 1) || (tableau_tmp[i+1][j+1] == 1) || (tableau_tmp[i-1][j] == 1) || (tableau_tmp[i+1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
            {
                tableau_tmp[i][j] = 1;
            }
        }
        i--;
        for(i;i>=0;i--)
        {
            if(i == 0)
            {
                if(((tableau_tmp[i][j+1] == 1) || (tableau_tmp[i+1][j+1] == 1) || (tableau_tmp[i+1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(i == LONGUEUR_PLATEAU-1)
            {
                if(((tableau_tmp[i-1][j+1] == 1) || (tableau_tmp[i][j+1] == 1) || (tableau_tmp[i-1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(((tableau_tmp[i-1][j+1] == 1) || (tableau_tmp[i][j+1] == 1) || (tableau_tmp[i+1][j+1] == 1) || (tableau_tmp[i-1][j] == 1) || (tableau_tmp[i+1][j] == 1)) && (p_square[i][j].verifier_occupe() == false))
            {
                tableau_tmp[i][j] = 1;
            }
        }
    }

    // 3ème vague, droite à gauche !
    i = LONGUEUR_PLATEAU-2;
    for(i;i>=0;i--)
    {
        j = 0;
        for(j;j<LONGUEUR_PLATEAU;j++)
        {
            if(j == 0)
            {
                if(((tableau_tmp[i+1][j] == 1) || (tableau_tmp[i+1][j+1] == 1) || (tableau_tmp[i][j+1] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(j == LONGUEUR_PLATEAU-1)
            {
                if(((tableau_tmp[i+1][j-1] == 1) || (tableau_tmp[i+1][j] == 1) || (tableau_tmp[i][j-1] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(((tableau_tmp[i+1][j-1] == 1) || (tableau_tmp[i+1][j] == 1) || (tableau_tmp[i+1][j+1] == 1) || (tableau_tmp[i][j-1] == 1) || (tableau_tmp[i][j+1] == 1)) && (p_square[i][j].verifier_occupe() == false))
            {
                tableau_tmp[i][j] = 1;
            }
        }
        j--;
        for(j;j>=0;j--)
        {
            if(j == 0)
            {
                if(((tableau_tmp[i+1][j] == 1) || (tableau_tmp[i+1][j+1] == 1) || (tableau_tmp[i][j+1] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(j == LONGUEUR_PLATEAU-1)
            {
                if(((tableau_tmp[i+1][j-1] == 1) || (tableau_tmp[i+1][j] == 1) || (tableau_tmp[i][j-1] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(((tableau_tmp[i+1][j-1] == 1) || (tableau_tmp[i+1][j] == 1) || (tableau_tmp[i+1][j+1] == 1) || (tableau_tmp[i][j-1] == 1) || (tableau_tmp[i][j+1] == 1)) && (p_square[i][j].verifier_occupe() == false))
            {
                tableau_tmp[i][j] = 1;
            }
        }
    }

    // 4ème vague, haut en bas !
    i = 1;
    for(i;i<LONGUEUR_PLATEAU;i++)
    {
        j = 0;
        for(j;j<LONGUEUR_PLATEAU;j++)
        {
            if(j == 0)
            {
                if(((tableau_tmp[i-1][j] == 1) || (tableau_tmp[i-1][j+1] == 1) || (tableau_tmp[i][j+1] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(j == LONGUEUR_PLATEAU-1)
            {
                if(((tableau_tmp[i-1][j-1] == 1) || (tableau_tmp[i-1][j] == 1) || (tableau_tmp[i][j-1] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(((tableau_tmp[i-1][j+1] == 1) || (tableau_tmp[i-1][j] == 1) || (tableau_tmp[i-1][j-1] == 1) || (tableau_tmp[i][j-1] == 1) || (tableau_tmp[i][j+1] == 1)) && (p_square[i][j].verifier_occupe() == false))
            {
                tableau_tmp[i][j] = 1;
            }
        }
        j--;
        for(j;j>=0;j--)
        {
            if(j == 0)
            {
                if(((tableau_tmp[i-1][j] == 1) || (tableau_tmp[i-1][j+1] == 1) || (tableau_tmp[i][j+1] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(j == LONGUEUR_PLATEAU-1)
            {
                if(((tableau_tmp[i-1][j-1] == 1) || (tableau_tmp[i-1][j] == 1) || (tableau_tmp[i][j-1] == 1)) && (p_square[i][j].verifier_occupe() == false))
                {
                    tableau_tmp[i][j] = 1;
                }
            }
            else if(((tableau_tmp[i-1][j+1] == 1) || (tableau_tmp[i-1][j] == 1) || (tableau_tmp[i-1][j-1] == 1) || (tableau_tmp[i][j-1] == 1) || (tableau_tmp[i][j+1] == 1)) && (p_square[i][j].verifier_occupe() == false))
            {
                tableau_tmp[i][j] = 1;
            }
        }
    }



    j = 0;
    i = 0;

    for (i;i<LONGUEUR_PLATEAU;i++)
    {
        for (j;j<LONGUEUR_PLATEAU;j++)
        {
            if(tableau_tmp[i][j] == 0 && p_square[i][j].verifier_occupe() == false)
            {
                p_square[i][j].modifier_type("close");
            }
        }
        j = 0;
    }

}

bool Plateau::est_fermee(int i,int j)
{
    bool close = false;
    if(p_square[i][j].envoyer_type() == "close")
    {
        close = true;
    }
    return close;
}
