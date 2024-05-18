#include <iostream>
#include <string>
#include <fstream>
#include "affichages.h"
#include "utilitaires.h"

using namespace std;

void garantir_existence_fichier(string chemin_fichier)
{
    ofstream fichier(chemin_fichier, ios::app);
}

int convertir_dollars_vers_centimes(double montant_en_dollars)
{
    return (int) montant_en_dollars * 100;
}

string formater_argent(int montant_en_centimes)
{
    double montant_en_dollar = (double) montant_en_centimes/ 100;

    string number_str = to_string(montant_en_dollar);
    size_t point_position = number_str.find('.'); 
    if (point_position != string::npos) {
        number_str = number_str.substr(0, point_position + 3); 
    }

    for (int i = number_str.length() - 3; i > 0; i -= 3)
    {
        if (number_str[i] == '.') continue;
        else number_str.insert(i, ",");
    }

    return number_str + "$";
}