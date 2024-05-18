#include "affichages.h"
#include "utilitaires.h"
#include <iostream>

using namespace std;

int main()
{   
    string const fichier_utilisateurs = "utilisateurs.txt";
    string const fichier_transactions = "transactions.txt";
    string const nom_utilisateur_admin = "ift-1004-union";
    int const solde_initial = convertir_dollars_vers_centimes(1000);
    bool continuer = true;

    garantir_existence_fichier(fichier_utilisateurs);
    garantir_existence_fichier(fichier_transactions);

    affiche_banniere("Bienvenue sur IFT-1004 Union !");

    while (continuer)
    {
        afficher_menu_principal();
        char action;
        cout << "Choisissez une action: ";
        cin >> action;
        cin.ignore();
        cout << "" << endl;

        if (action == '1')
        {
            cout << "Option 1 picked" << endl;
        }
        else if (action == '2')
        {
            cout << "Option 2 picked" << endl;
        }
        else if (action == '3')
        {
            continuer = false;
        }
        else 
        {
            cout << "action invalide" << endl;
        }
    }
    return 0;
}