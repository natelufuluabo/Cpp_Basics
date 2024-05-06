#include <iostream>
#include <string>

void print_hashesh(int largeur_banniere)
{   
    for (int i = 0; i < largeur_banniere; i++)
    {
        std::cout << '#';
    }
    std::cout << "" << std::endl;
}

void print_banniere()
{
    std::string titre_banniere = "Calculateur de remboursement hypothécaire";
    int largeur_banniere = titre_banniere.length();
    print_hashesh(largeur_banniere);
    std::cout << titre_banniere << std::endl;
    print_hashesh(largeur_banniere);
}

int main()
{
    print_banniere();
}