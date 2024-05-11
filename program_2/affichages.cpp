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

void afficher_menu_principal()
{
    std::cout << "\nMenu Principal" << std::endl;
    std::cout << "1. Créer un compte" << std::endl;
    std::cout << "2. Se connecter" << std::endl;
    std::cout << "3. Quitter\n" << std::endl;
}

void afficher_menu_utilisateur()
{
    std::cout << "\nMenu Utilisateur" << std::endl;
    std::cout << "1. Envoyer de l'argent" << std::endl;
    std::cout << "2. Consulter mon solde" << std::endl;
    std::cout << "3. Consulter mes transactions" << std::endl;
    std::cout << "4. Se déconnecter" << std::endl;
}