//***************************************************
//* RAMPART - DEFEND THE CASTEL                     *
//*                                                 *
//* Auteur : Mitch, Antoine, Zouf, Mandarine & Djow *
//***************************************************

#include <sstream>
#include "Timer.hpp"

//******************
//* Les librairies *
//******************

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "forme.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

#include "case.hpp"
#include "plateau.hpp"
#include "constantes.hpp"


//******************
//* Les namespaces *
//******************

using namespace sf;
using namespace std;


//********************************
//* Les prototypes des fonctions *
//********************************

void MAJTableau(int NumeroForme, int MouseX, int MouseY);
int Aleatoire(int min, int max);


//**************************
//* Les variables globales *
//**************************

RenderWindow app(VideoMode(1100, 800, 32), "Rampard ! ! !");
Shape block;
Plateau tableau;
forme test = forme(Aleatoire(0,10));


//******************************
//* Fonction de transformation *
//* de string en nombre        *
//* pour le chrono             *
//******************************

const int FONT_SIZE = 80;
template <class T> string nb2String(T nb)
{
    ostringstream s;

    s << nb;

    return s.str();
}


//**************************
//* La fonction principale *
//**************************

int main()
{
    Timer timer;
    tableau.creer_types();

    Font font;
    String text;
    if(!font.LoadFromFile("digital-7.ttf", FONT_SIZE)) //, 30.0f))
    {
        cerr<<"Erreur durant le chargement de la fonte"<<endl;
    }
    else
    {
        text.SetFont(font);
        text.SetColor(Color::Red);
        text.SetSize(FONT_SIZE);
    }
    Image chato;
    Image image;
    Image mur;
    Sprite sprite;
    Sprite Mursprite;
    Sprite chatosprite;

    if (!image.LoadFromFile("images/carte.png")) // Si le chargement du fichier a échoué
    {
        return EXIT_FAILURE; // On ferme le programme
    }
    else // Si le chargement de l'image a réussi
    {
        sprite.SetImage(image);
    }

    if (!chato.LoadFromFile("images/chato.png")) // Si le chargement du fichier a échoué
    {
        return EXIT_FAILURE; // On ferme le programme
    }
    else // Si le chargement de l'image a réussi
    {
        chatosprite.SetImage(chato);
    }


    if (!mur.LoadFromFile("images/rampart.png")) // Si le chargement du fichier a échoué
    {
        return EXIT_FAILURE; // On ferme le programme
    }
    else // Si le chargement de l'image a réussi
    {
        Mursprite.SetImage(mur);
    }
    sprite.Resize(900, 900);

    //********************************************************
    //* Déclaration des variables ainsi que l'initialisation *
    //********************************************************


    srand(time(NULL)); // On initialise le random


    int i=0, j=0, ClicGauche=0; // Quelques variables necessaires par la suite


    // On initialise les différentes formes, (on trace les formes)

    //
    // le block d'une case  *
    //

    block.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
    block.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
    block.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
    block.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
    block.SetColor(Color(100,100,100,100));


    app.SetFramerateLimit(200); // On limite le nombre d'image par seconde

    timer.Start();


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

        text.SetText(nb2String((int)timer.GetTime()));
        text.SetPosition(1000, 100);
        chatosprite.SetPosition(330, 270);
        app.Clear(Color(0,255,0));                  // On colore le fond de la fenêtre en vert

        const Input & input = app.GetInput();       // input : référence constante

        if (input.IsMouseButtonDown(Mouse::Left))   // clic gauche
        {
            if(ClicGauche==0) // On vérifie si le bouton gauche est déjà enfoncé
            {
                MAJTableau(test.GetIdForme(), input.GetMouseX(), input.GetMouseY());    // On met à jour le plateau du jeu

                ClicGauche = 1;                                                         // On passe la variable à appuyé
                                                                                        // On récupère une forme aléatoire

            }
        }else
        {
            ClicGauche = 0; // On passe la variable à non-appuyé
        }

        app.Draw(text);
        app.Draw(sprite);
        app.Draw(chatosprite);

        for (int i=0 ; i<LONGUEUR_PLATEAU ; i++)
        {
            for (int j = 0 ; j<LONGUEUR_PLATEAU ; j++)
            {
                if (tableau.colorier_case(i,j))
                {
                    Mursprite.SetPosition(i*TAILLE_CASE,j*TAILLE_CASE);
                    //block.SetColor(sf::Color(100,100,100));
                    app.Draw(Mursprite);
                    //block.SetColor(sf::Color(100,100,100,100));
                }
            }

        }
        //tableau.colorier_case(block,app);

        //if(tableau[input.GetMouseX()/15][input.GetMouseY()/15] == 0)
        //{
            //AfficherForme(forme,input.GetMouseX(),input.GetMouseY());
            //app.Draw(test.GetForme((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));

            if(test.IsRampart1())
            {
                app.Draw(test.GetRampart1((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
            if(test.IsRampart2())
            {
                app.Draw(test.GetRampart2((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
            if(test.IsRampart3())
            {
                app.Draw(test.GetRampart3((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
            if(test.IsRampart4())
            {
                app.Draw(test.GetRampart4((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
            if(test.IsRampart5())
            {
                app.Draw(test.GetRampart5((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
        //}


        // Affichage de la fenêtre à l'écran
        app.Display();
    }
    return EXIT_SUCCESS;
}





//*****************************
//* Les fonctions secondaires *
//*****************************


void MAJTableau(int NumeroForme, int MouseX, int MouseY)
{
    switch(NumeroForme)
    {
        case 10:
            if( tableau.verifier_case((MouseX/TAILLE_CASE)+2,MouseY/TAILLE_CASE) == false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
                tableau.verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false &&
                tableau.verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >=0 &&
                tableau.verifier_case((MouseX/TAILLE_CASE)-1,(MouseY/TAILLE_CASE)+1) == false &&
                tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) ==false)
            {

                tableau.verifier_case((MouseX/TAILLE_CASE)-1,(MouseY/TAILLE_CASE)+1);
                tableau.verifier_case((MouseX/TAILLE_CASE)+2,MouseY/TAILLE_CASE);
                tableau.verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
                tableau.verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
                tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

                test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 9:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1) == false && (MouseY/TAILLE_CASE-1) >= 0 &&
                tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+2) == false &&
                tableau.verifier_case((MouseX/TAILLE_CASE)-1,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE+3) <= LONGUEUR_PLATEAU &&
                tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false &&
                tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) ==false)
            {

                tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);
                tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+2);
                tableau.modifier_ocase((MouseX/TAILLE_CASE)-1,(MouseY/TAILLE_CASE)-1);
                tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
                tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

                test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 8:
            if(tableau.verifier_case((MouseX/TAILLE_CASE)+2,(MouseY/TAILLE_CASE)-1) == false && (MouseX/TAILLE_CASE+3) <= LONGUEUR_PLATEAU && (MouseY/TAILLE_CASE-1) >= 0 &&
                tableau.verifier_case((MouseX/TAILLE_CASE)+2,MouseY/TAILLE_CASE) == false &&
                tableau.verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >=0 &&
                tableau.verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false &&
                tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) ==false)
            {

                tableau.modifier_ocase((MouseX/TAILLE_CASE)+2,(MouseY/TAILLE_CASE)-1);
                tableau.modifier_ocase((MouseX/TAILLE_CASE)+2,MouseY/TAILLE_CASE);
                tableau.modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
                tableau.modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
                tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

                test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 7:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-2) == false &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-3) == false && (MouseY/TAILLE_CASE-3) >= 0 &&
            tableau.verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false &&
            tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false)
            {

            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-2);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-3);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

            test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 6:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            tableau.verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false &&
            tableau.verifier_case((MouseX/TAILLE_CASE)+1,(MouseY/TAILLE_CASE)+1) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1) == false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)+1,(MouseY/TAILLE_CASE)+1);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 5:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            tableau.verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE-1) >= 0 &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1) == false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 4:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            tableau.verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >= 0 &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE-1) >= 0 &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1) == false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 3:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            tableau.verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >= 0 &&
            tableau.verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1)== false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 2:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            tableau.verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >= 0 &&
            tableau.verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE-1) >= 0)
            {
            tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);

            test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 1:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false &&
            tableau.verifier_case((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE-1) >= 0 &&
            tableau.verifier_case((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE) == false && (MouseX/TAILLE_CASE+2) <= LONGUEUR_PLATEAU &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1) == false && (MouseY/TAILLE_CASE-1) >= 0 &&
            tableau.verifier_case(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1)== false && (MouseY/TAILLE_CASE+2) <= LONGUEUR_PLATEAU)
            {
            tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)-1);
            tableau.modifier_ocase(MouseX/TAILLE_CASE,(MouseY/TAILLE_CASE)+1);

            test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;

        case 0:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false)
            {
            tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

            test.DefinirForme(Aleatoire(0,10));  // On récupère une forme aléatoire
            }
            break;
    }
}


int Aleatoire(int min, int max)
{
    return (min + int( double( rand() ) / ( double( RAND_MAX)  ) * (max + 1) ));
}
