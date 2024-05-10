#include <string>
#include <iostream>

void imprimer_hash(int largeur_banniere)
{
    for (int i = 0; i < largeur_banniere; i++)
    {
        printf("#");
    }
}

void affiche_banniere(std::string titre)
{
    int largeur_banniere = titre.length() + 20;
    imprimer_hash(largeur_banniere);
    printf("titre: ");
    imprimer_hash(largeur_banniere);
}