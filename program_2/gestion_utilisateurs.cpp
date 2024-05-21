#include <iostream>
#include <string>
#include <fstream>
#include "gestion_utilisateurs.h"
#include "configurations.h"

using namespace std;

bool enregistrer_utilisateur()
{
    string nom_utilisateur;
    string mot_de_passe;
    string entree_utilisateur;

    cout << "Entrez le nom d'utilisateur: ";
    cin >> entree_utilisateur;
    if (entree_utilisateur.length() < 1)
    {
        cout << "Le nom d'utilisateur ne peut pas être vide." << endl;
        return false;
    }
    nom_utilisateur =  entree_utilisateur;
    cin.ignore();

    cout << "Entrez le mot de passe: ";
    cin >> entree_utilisateur;
    if (entree_utilisateur.length() < 1)
    {
        cout << "Le mot de passe ne peut pas être vide" << endl;
        return false;
    }
    mot_de_passe = entree_utilisateur;
    cin.ignore();

    ofstream fichier(fichier_utilisateurs, ios::app);
    fichier << nom_utilisateur << "," << mot_de_passe << "," << solde_initial << endl;
    return true;
}