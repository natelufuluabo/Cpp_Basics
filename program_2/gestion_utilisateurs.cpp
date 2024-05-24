#include <iostream>
#include <string>
#include <fstream>
#include <array>
#include "gestion_utilisateurs.h"
#include "configurations.h"

using namespace std;

bool utilisateur_existe(std::string p_nom_utilisateur)
{
    ifstream fichier(fichier_utilisateurs);
    string nom_utilisateur = "";
    string ligne;

    while(getline(fichier, ligne))
    {
        for (int i = 0; i < ligne.length(); i++)
        {
            if (ligne[i] != ',')
            {
                nom_utilisateur += ligne[i];
            }
            else 
            {
                break;
            }
        }

        if (p_nom_utilisateur == nom_utilisateur) {
            return true;
        }
    }

    return false;
}

bool enregistrer_utilisateur()
{
    string nom_utilisateur;
    string mot_de_passe;
    string entree_utilisateur;

    cout << "Entrez le nom d'utilisateur: ";
    cin >> entree_utilisateur;
    if (utilisateur_existe(entree_utilisateur))
    {
        cout << "Le nom d'utilisateur existe déjà." << endl;
        return false;
    }
    nom_utilisateur =  entree_utilisateur;
    cin.ignore();

    cout << "Entrez le mot de passe: ";
    cin >> entree_utilisateur;
    mot_de_passe = entree_utilisateur;
    cin.ignore();

    ofstream fichier(fichier_utilisateurs, ios::app);
    fichier << nom_utilisateur << "," << mot_de_passe << "," << solde_initial << endl;
    return true;
}