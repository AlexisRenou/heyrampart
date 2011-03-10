//*******************************
//* RAMPART - DEFEND THE CASTEL *
//*                             *
//* Auteur : Mitch              *
//*******************************



//******************
//* Les librairies *
//******************

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <time.h>


//******************
//* Les namespaces *
//******************

using namespace sf;


//********************************
//* Les prototypes des fonctions *
//********************************

void AfficherForme(int NumeroForme, int MouseX, int MouseY);
void MAJTableau(int NumeroForme, int MouseX, int MouseY);
int Aleatoire(int min, int max);


//**************************
//* Les variables globales *
//**************************

RenderWindow app(VideoMode(800, 800, 32), "Rampard ! ! !");
Shape block;
Shape croix;
Shape T1;
Shape T2;
Shape T3;
Shape T4;
Shape carre;
Shape L1;
Shape L2;
Shape L3;
Shape L4;
int tableau[40][40];


//**************************
//* La fonction principale *
//**************************

int main()
{

    //********************************************************
    //* Déclaration des variables ainsi que l'initialisation *
    //********************************************************


    srand(time(NULL)); // On initialise le random


    int i=0, j=0, ClicGauche=0, forme=0; // Quelques variables necessaires par la suite

    // On initialise le plateau du jeu

    for(i=0;i<40;i++)
    {
        for(j=0;j<40;j++)
        {
            tableau[i][j] = 0;
        }
        j=0;
    }


    // On initialise les différentes formes, (on trace les formes)

    //
    // le block d'une case  *
    //

    block.AddPoint(0,0,Color(100,100,100));
    block.AddPoint(0,20,Color(100,100,100));
    block.AddPoint(20,20,Color(100,100,100));
    block.AddPoint(20,0,Color(100,100,100));
    block.SetColor(Color(100,100,100,100));


    //                *
    // la croix      ***
    //                *

    croix.AddPoint(20,0,Color(100,100,100));
    croix.AddPoint(20,20,Color(100,100,100));
    croix.AddPoint(0,20,Color(100,100,100));
    croix.AddPoint(0,40,Color(100,100,100));
    croix.AddPoint(20,40,Color(100,100,100));
    croix.AddPoint(20,60,Color(100,100,100));
    croix.AddPoint(40,60,Color(100,100,100));
    croix.AddPoint(40,40,Color(100,100,100));
    croix.AddPoint(60,40,Color(100,100,100));
    croix.AddPoint(60,20,Color(100,100,100));
    croix.AddPoint(40,20,Color(100,100,100));
    croix.AddPoint(40,0,Color(100,100,100));
    croix.SetColor(Color(100,100,100,100));
    croix.SetCenter(20,20);



    //                *
    // le T1         ***
    //

    T1.AddPoint(20,0,Color(100,100,100));
    T1.AddPoint(20,20,Color(100,100,100));
    T1.AddPoint(0,20,Color(100,100,100));
    T1.AddPoint(0,40,Color(100,100,100));
    T1.AddPoint(60,40,Color(100,100,100));
    T1.AddPoint(60,20,Color(100,100,100));
    T1.AddPoint(40,20,Color(100,100,100));
    T1.AddPoint(40,0,Color(100,100,100));
    T1.SetColor(Color(100,100,100,100));
    T1.SetCenter(20,20);


    //
    // le T2         ***
    //                *

    T2.AddPoint(0,20,Color(100,100,100));
    T2.AddPoint(0,40,Color(100,100,100));
    T2.AddPoint(20,40,Color(100,100,100));
    T2.AddPoint(20,60,Color(100,100,100));
    T2.AddPoint(40,60,Color(100,100,100));
    T2.AddPoint(40,40,Color(100,100,100));
    T2.AddPoint(60,40,Color(100,100,100));
    T2.AddPoint(60,20,Color(100,100,100));
    T2.SetColor(Color(100,100,100,100));
    T2.SetCenter(20,20);


    //                *
    // le T3         **
    //                *

    T3.AddPoint(20,0,Color(100,100,100));
    T3.AddPoint(20,20,Color(100,100,100));
    T3.AddPoint(0,20,Color(100,100,100));
    T3.AddPoint(0,40,Color(100,100,100));
    T3.AddPoint(20,40,Color(100,100,100));
    T3.AddPoint(20,60,Color(100,100,100));
    T3.AddPoint(40,60,Color(100,100,100));
    T3.AddPoint(40,0,Color(100,100,100));
    T3.SetColor(Color(100,100,100,100));
    T3.SetCenter(20,20);


    //                *
    // le T4          **
    //                *

    T4.AddPoint(20,0,Color(100,100,100));
    T4.AddPoint(20,60,Color(100,100,100));
    T4.AddPoint(40,60,Color(100,100,100));
    T4.AddPoint(40,40,Color(100,100,100));
    T4.AddPoint(60,40,Color(100,100,100));
    T4.AddPoint(60,20,Color(100,100,100));
    T4.AddPoint(40,20,Color(100,100,100));
    T4.AddPoint(40,0,Color(100,100,100));
    T4.SetColor(Color(100,100,100,100));
    T4.SetCenter(20,20);


    //                      **
    // le carre de 4 case   **
    //

    carre.AddPoint(0,0);
    carre.AddPoint(0,40);
    carre.AddPoint(40,40);
    carre.AddPoint(40,0);
    carre.SetColor(Color(100,100,100,100));


    //                *
    // le L1          *
    //                **

    L1.AddPoint(0,0);
    L1.AddPoint(0,80);
    L1.AddPoint(40,80);
    L1.AddPoint(40,60);
    L1.AddPoint(20,60);
    L1.AddPoint(20,0);
    L1.SetColor(Color(100,100,100,100));
    L1.SetCenter(0,60);


    //                 *
    // le L2        ****
    //

    L2.AddPoint(0,20);
    L2.AddPoint(0,40);
    L2.AddPoint(80,40);
    L2.AddPoint(80,00);
    L2.AddPoint(60,00);
    L2.AddPoint(60,20);
    L2.SetColor(Color(100,100,100,100));
    L2.SetCenter(20,20);


    //               **
    // le L3          *
    //                *

    L3.AddPoint(20,0,Color(100,100,100));
    L3.AddPoint(20,20,Color(100,100,100));
    L3.AddPoint(0,20,Color(100,100,100));
    L3.AddPoint(0,40,Color(100,100,100));
    L3.AddPoint(20,40,Color(100,100,100));
    L3.AddPoint(20,60,Color(100,100,100));
    L3.AddPoint(40,60,Color(100,100,100));
    L3.AddPoint(40,0,Color(100,100,100));
    L3.SetCenter(20,20);


    //
    // le L4        ****
    //              *

    L4.AddPoint(20,0,Color(100,100,100));
    L4.AddPoint(20,60,Color(100,100,100));
    L4.AddPoint(40,60,Color(100,100,100));
    L4.AddPoint(40,40,Color(100,100,100));
    L4.AddPoint(60,40,Color(100,100,100));
    L4.AddPoint(60,20,Color(100,100,100));
    L4.AddPoint(40,20,Color(100,100,100));
    L4.AddPoint(40,0,Color(100,100,100));
    L4.SetCenter(20,20);



    app.SetFramerateLimit(200); // On limite le nombre d'image par seconde



    //**************************
    //* La boucle du programme *
    //**************************

    while (app.IsOpened())
    {

        Event event;

        while(app.GetEvent(event)) // Boucle des évènements
        {
            switch(event.Type)
            {
                case Event::Closed : // Croix de fermeture
                    app.Close();
                    break;

                case Event::KeyPressed : // Appui sur une touche
                {
                    switch(event.Key.Code)
                    {
                        case Key::Escape : // Touche echap
                            app.Close();
                            break;
                    }
                }
                break;
            }
        }


        app.Clear(Color(0,255,0));                  // On colore le fond de la fenêtre en vert

        const Input & input = app.GetInput();       // input : référence constante

        if (input.IsMouseButtonDown(Mouse::Left))   // clic gauche
        {
            if(ClicGauche==0) // On vérifie si le bouton gauche est déjà enfoncé
            {
                MAJTableau(forme, input.GetMouseX(), input.GetMouseY());    // On met à jour le plateau du jeu
                ClicGauche = 1;                                             // On passe la variable à appuyé
                forme = Aleatoire(0,8);                                     // On récupère une forme aléatoire
            }
        }else
        {
            ClicGauche = 0; // On passe la variable à non-appuyé
        }

        for(i=0;i < 40;i++)
        {
            for(j=0;j < 40;j++)
            {
                if(tableau[i][j] == 1)
                {
                    block.SetPosition(i*20,j*20);
                    block.SetColor(Color(100,100,100));
                    app.Draw(block);
                    block.SetColor(Color(100,100,100,100));
                }
            }
            j=0;
        }

        if(tableau[input.GetMouseX()/20][input.GetMouseY()/20] == 0)
        {
            AfficherForme(forme,input.GetMouseX(),input.GetMouseY());
        }


        // Affichage de la fenêtre à l'écran
        app.Display();
    }
    return EXIT_SUCCESS;
}





//*****************************
//* Les fonctions secondaires *
//*****************************



void AfficherForme(int NumeroForme, int MouseX, int MouseY)
{
    switch(NumeroForme)
    {
        case 8:

            L2.SetPosition((MouseX/20)*20,(MouseY/20)*20);
            app.Draw(L2);

            break;

        case 7:

            L1.SetPosition((MouseX/20)*20,(MouseY/20)*20);
            app.Draw(L1);

            break;

        case 6:

            carre.SetPosition((MouseX/20)*20,(MouseY/20)*20);
            app.Draw(carre);

            break;

        case 5:

            T4.SetPosition((MouseX/20)*20,(MouseY/20)*20);
            app.Draw(T4);

            break;

        case 4:

            T3.SetPosition((MouseX/20)*20,(MouseY/20)*20);
            app.Draw(T3);

            break;

        case 3:

            T2.SetPosition((MouseX/20)*20,(MouseY/20)*20);
            app.Draw(T2);

            break;

        case 2:

            T1.SetPosition((MouseX/20)*20,(MouseY/20)*20);
            app.Draw(T1);

            break;

        case 1:


            croix.SetPosition((MouseX/20)*20,(MouseY/20)*20);
            app.Draw(croix);

            break;

        case 0:

            block.SetPosition((MouseX/20)*20,(MouseY/20)*20);
            app.Draw(block);

            break;
    }
}



void MAJTableau(int NumeroForme, int MouseX, int MouseY)
{
    switch(NumeroForme)
    {
         case 8:

            tableau[(MouseX/20)+2][(MouseY/20)-1] = 1;
            tableau[(MouseX/20)+2][MouseY/20] = 1;
            tableau[(MouseX/20)-1][MouseY/20] = 1;
            tableau[(MouseX/20)+1][MouseY/20] = 1;
            tableau[MouseX/20][MouseY/20] = 1;

            break;

        case 7:

            tableau[MouseX/20][(MouseY/20)-2] = 1;
            tableau[MouseX/20][(MouseY/20)-3] = 1;
            tableau[(MouseX/20)+1][MouseY/20] = 1;
            tableau[MouseX/20][(MouseY/20)-1] = 1;
            tableau[MouseX/20][MouseY/20] = 1;

            break;

        case 6:

            tableau[MouseX/20][MouseY/20] = 1;
            tableau[(MouseX/20)+1][MouseY/20] = 1;
            tableau[(MouseX/20)+1][(MouseY/20)+1] = 1;
            tableau[MouseX/20][(MouseY/20)+1] = 1;

            break;

        case 5:

            tableau[MouseX/20][MouseY/20] = 1;
            tableau[(MouseX/20)+1][MouseY/20] = 1;
            tableau[MouseX/20][(MouseY/20)-1] = 1;
            tableau[MouseX/20][(MouseY/20)+1] = 1;

            break;

        case 4:

            tableau[MouseX/20][MouseY/20] = 1;
            tableau[(MouseX/20)-1][MouseY/20] = 1;
            tableau[MouseX/20][(MouseY/20)-1] = 1;
            tableau[MouseX/20][(MouseY/20)+1] = 1;

            break;

        case 3:

            tableau[MouseX/20][MouseY/20] = 1;
            tableau[(MouseX/20)-1][MouseY/20] = 1;
            tableau[(MouseX/20)+1][MouseY/20] = 1;
            tableau[MouseX/20][(MouseY/20)+1] = 1;

            break;

        case 2:

            tableau[MouseX/20][MouseY/20] = 1;
            tableau[(MouseX/20)-1][MouseY/20] = 1;
            tableau[(MouseX/20)+1][MouseY/20] = 1;
            tableau[MouseX/20][(MouseY/20)-1] = 1;

            break;

        case 1:

            tableau[MouseX/20][MouseY/20] = 1;
            tableau[(MouseX/20)-1][MouseY/20] = 1;
            tableau[(MouseX/20)+1][MouseY/20] = 1;
            tableau[MouseX/20][(MouseY/20)-1] = 1;
            tableau[MouseX/20][(MouseY/20)+1] = 1;

            break;

        case 0:

            tableau[MouseX/20][MouseY/20] = 1;

            break;
    }
}



int Aleatoire(int min, int max)
{
    return (min + int( double( rand() ) / ( double( RAND_MAX)  ) * (max + 1) ));
}
