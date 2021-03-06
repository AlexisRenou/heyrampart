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
#include "fonction.hpp"


//******************
//* Les namespaces *
//******************

using namespace sf;
using namespace std;


//********************************
//* Les prototypes des fonctions *
//********************************

//void MAJTableau(int NumeroForme, int MouseX, int MouseY);
//int Aleatoire(int min, int max);


//**************************
//* Les variables globales *
//**************************

int TailleFenetre = LONGUEUR_PLATEAU*TAILLE_CASE;

RenderWindow app(VideoMode(TailleFenetre+200, TailleFenetre, 32), "Rampard ! ! !");
//Shape block;
Plateau tableau;
forme muraille = forme(Aleatoire(0,10));
enum Etat {posemur, canon, combat};


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
    Shape Block;
    Block.AddPoint(0*TAILLE_CASE,0*TAILLE_CASE,Color(0,0,0,100));
    Block.AddPoint(0*TAILLE_CASE,1*TAILLE_CASE,Color(0,0,0,100));
    Block.AddPoint(1*TAILLE_CASE,1*TAILLE_CASE,Color(0,0,0,100));
    Block.AddPoint(1*TAILLE_CASE,0*TAILLE_CASE,Color(0,0,0,100));

    Timer timer = Timer(TEMPS_ROUND);
    tableau.creer_types();

    Font font;
    String text;
    if(!font.LoadFromFile("coopbl.ttf", FONT_SIZE)) //, 30.0f))
    {
        cerr<<"Erreur durant le chargement de la fonte"<<endl;
    }
    else
    {
        text.SetFont(font);
        text.SetColor(Color::White);
        text.SetSize(FONT_SIZE);
    }
    Image chato;
    Image image;
    Image mur;
    Image canonimage;
    Sprite sprite;
    Sprite Mursprite;
    Sprite chatosprite;
    Sprite canonsprite;

    if (!image.LoadFromFile("images/carte.png")) // Si le chargement du fichier a �chou�
    {
        return EXIT_FAILURE; // On ferme le programme
    }
    else // Si le chargement de l'image a r�ussi
    {
        sprite.SetImage(image);
    }

    if (!chato.LoadFromFile("images/chato.png")) // Si le chargement du fichier a �chou�
    {
        return EXIT_FAILURE; // On ferme le programme
    }
    else // Si le chargement de l'image a r�ussi
    {
        chatosprite.SetImage(chato);
    }

    if (!mur.LoadFromFile("images/rampart.png")) // Si le chargement du fichier a �chou�
    {
        return EXIT_FAILURE; // On ferme le programme
    }
    else // Si le chargement de l'image a r�ussi
    {
        Mursprite.SetImage(mur);
    }
    if (!canonimage.LoadFromFile("images/canon.png")) // Si le chargement du fichier a �chou�
    {
        return EXIT_FAILURE; // On ferme le programme
    }
    else // Si le chargement de l'image a r�ussi
    {
        canonimage.CreateMaskFromColor(sf::Color(255,255,255),0);
        canonsprite.SetImage(canonimage);
        canonsprite.SetCenter(7.5,7.5);
    }
    sprite.Resize(900, 900);

    //********************************************************
    //* D�claration des variables ainsi que l'initialisation *
    //********************************************************


    //srand(time(NULL)); // On initialise le random


    int i=0, j=0, ClicGauche=0; // Quelques variables necessaires par la suite
    Etat JeuxRampart = posemur;


    // On initialise les diff�rentes formes, (on trace les formes)

    //
    // le block d'une case  *
    //

   /* block.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 0);
    block.AddPoint(TAILLE_CASE * 0,TAILLE_CASE * 1);
    block.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 1);
    block.AddPoint(TAILLE_CASE * 1,TAILLE_CASE * 0);
    block.SetColor(Color(100,100,100,100));*/


    app.SetFramerateLimit(200); // On limite le nombre d'image par seconde

    timer.Start();


    //**************************
    //* La boucle du programme *
    //**************************

    while (app.IsOpened())
    {

        Event event;

        while(app.GetEvent(event)) // Boucle des �v�nements
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

        if((int)timer.GetTime() == 0)
        {
            if(JeuxRampart == posemur)
            {
                bool validation = false;

                for (int i=21 ; i<28 ; i++)
                {
                    if(tableau.Get_Square(i,17).envoyer_type() == "close")
                    {
                        validation = true;
                    }
                }
                for (int i=21 ; i<28 ; i++)
                {
                    if(tableau.Get_Square(i,24).envoyer_type() == "close")
                    {
                        validation = true;
                    }
                }
                for (int j=18 ; j<23 ; j++)
                {
                    if(tableau.Get_Square(21,j).envoyer_type() == "close")
                    {
                        validation = true;
                    }
                }
                for (int j=18 ; j<23 ; j++)
                {
                    if(tableau.Get_Square(28,j).envoyer_type() == "close")
                    {
                        validation = true;
                    }
                }
                if(!(validation))
                {
                    goto GameOver;
                }
                JeuxRampart = canon;
            }
            else if(JeuxRampart == canon)
            {
                JeuxRampart = combat;
            }
            else if(JeuxRampart == combat)
            {
                JeuxRampart = posemur;
            }
            timer.Reinitialize();
            timer.Start();
        }

        text.SetText(nb2String((int)timer.GetTime()));
        text.SetPosition(TailleFenetre+50, 100);
        chatosprite.SetPosition(330, 270);
        app.Clear(Color(0,0,0));                  // On colore le fond de la fen�tre en vert

        const Input & input = app.GetInput();       // input : r�f�rence constante

        if (input.IsMouseButtonDown(Mouse::Left))   // clic gauche
        {
            if(ClicGauche==0) // On v�rifie si le bouton gauche est d�j� enfonc�
            {
                if(JeuxRampart == posemur)
                {
                    //MAJTableau(muraille.GetIdForme(), input.GetMouseX(), input.GetMouseY());    // On met � jour le plateau du jeu
                    muraille = tableau.MAJTableau(muraille.GetIdForme(), input.GetMouseX(), input.GetMouseY(), muraille, Aleatoire(0,10));
                    ClicGauche = 1;                                                         // On passe la variable � appuy�
                    tableau.Verifier_fermement();
                }
                else if(JeuxRampart == canon)
                {
                    tableau.Get_Square(input.GetMouseX()/TAILLE_CASE,input.GetMouseY()/TAILLE_CASE).modifier_type("canon");
                    ClicGauche = 1;
                }

            }
        }else
        {
            ClicGauche = 0; // On passe la variable � non-appuy�
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
                if(JeuxRampart != combat)
                {
                    if (tableau.est_fermee(i,j))
                    {
                        Block.SetPosition(i*TAILLE_CASE,j*TAILLE_CASE);
                        app.Draw(Block);
                    }
                }
                if (tableau.Get_Square(i,j).envoyer_type() == "canon")
                {
                    canonsprite.SetPosition(i*TAILLE_CASE+7.5,j*TAILLE_CASE+7.5);
                    app.Draw(canonsprite);
                }
            }
        }
        //tableau.colorier_case(block,app);

        //if(tableau[input.GetMouseX()/15][input.GetMouseY()/15] == 0)
        //{
            //AfficherForme(forme,input.GetMouseX(),input.GetMouseY());
            //app.Draw(muraille.GetForme((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
        if(JeuxRampart == posemur)
        {
            if(muraille.IsRampart1())
            {
                app.Draw(muraille.GetRampart1((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
            if(muraille.IsRampart2())
            {
                app.Draw(muraille.GetRampart2((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
            if(muraille.IsRampart3())
            {
                app.Draw(muraille.GetRampart3((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
            if(muraille.IsRampart4())
            {
                app.Draw(muraille.GetRampart4((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
            if(muraille.IsRampart5())
            {
                app.Draw(muraille.GetRampart5((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE,(input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE));
            }
        }
        if(JeuxRampart == canon)
        {
            canonsprite.SetPosition(((input.GetMouseX()/TAILLE_CASE)*TAILLE_CASE)+7.5,((input.GetMouseY()/TAILLE_CASE)*TAILLE_CASE)+7.5);
            app.Draw(canonsprite);
        }
        //}


        // Affichage de la fen�tre � l'�cran
        app.Display();
    }
    return EXIT_SUCCESS;

    GameOver:

    app.Close();
    cout << "Game Over ! ! ! ! !" << endl;

    return 0;
}





//*****************************
//* Les fonctions secondaires *
//*****************************


/*void MAJTableau(int NumeroForme, int MouseX, int MouseY)
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

                tableau.modifier_ocase((MouseX/TAILLE_CASE)-1,(MouseY/TAILLE_CASE)+1);
                tableau.modifier_ocase((MouseX/TAILLE_CASE)+2,MouseY/TAILLE_CASE);
                tableau.modifier_ocase((MouseX/TAILLE_CASE)-1,MouseY/TAILLE_CASE);
                tableau.modifier_ocase((MouseX/TAILLE_CASE)+1,MouseY/TAILLE_CASE);
                tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

                muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
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

                muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
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

                muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
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

            muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
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

            muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
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

            muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
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

            muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
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

            muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
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

            muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
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

            muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
            }
            break;

        case 0:
            if(tableau.verifier_case(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE) == false)
            {
            tableau.modifier_ocase(MouseX/TAILLE_CASE,MouseY/TAILLE_CASE);

            muraille.DefinirForme(Aleatoire(0,10));  // On r�cup�re une forme al�atoire
            }
            break;
    }
}*/

/*
int Aleatoire(int min, int max)
{
    int alea = (min + int( double( rand() ) / ( double( RAND_MAX ) ) * (max + 1) ));
    return alea;
}*/
