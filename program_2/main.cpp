#include "affichages.h"
#include "utilitaires.h"
#include <iostream>

using namespace std;

int main()
{   
    affiche_banniere("Bienvenue sur IFT-1004 Union !");
    cout << formater_argent(123456789) << endl;
    return 0;
}