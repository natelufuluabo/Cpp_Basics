#include <iostream>
#include <string>
#include "utilitaires.h"
#include "configurations.h"

using namespace std;

string const fichier_utilisateurs = "utilisateurs.txt";
string const fichier_transactions = "transactions.txt";
string const nom_utilisateur_admin = "ift-1004-union";
int const solde_initial = convertir_dollars_vers_centimes(1000);