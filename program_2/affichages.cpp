#include "affichages.h"
#include <iostream>

void imprimer_hash(int largeur_banniere)
{
    for (int i = 0; i < largeur_banniere; i++)
    {
        std::cout << "#";
    }
    std::cout << "" << std::endl;
}

void affiche_banniere(std::string titre)
{
    int largeur_banniere = titre.length() + 20;
    imprimer_hash(largeur_banniere);
    std::cout << titre << std::endl;
    imprimer_hash(largeur_banniere);
}