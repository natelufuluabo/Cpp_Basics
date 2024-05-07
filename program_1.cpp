#include <iostream>
#include <string>
#include <iomanip>

void print_hashes(int largeur_banniere)
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
    print_hashes(largeur_banniere);
    std::cout << titre_banniere << std::endl;
    print_hashes(largeur_banniere);
}

int main()
{
    print_banniere();

    int nombre_dacheteurs = 0;
    float budget_total = 0;
    float budgets_coproprietaires[nombre_dacheteurs];
    float prix_propriete = 0;
    float mise_de_fonds = 0;
    float interet_annuel = 0;
    int periode_amortissement = 0;

    bool faire_simulation = true;

    while (faire_simulation)
    {
        do
        {
            std::cout << "Combien de personnes contribueront à l'achat de la propriété? ";
            std::cin >> nombre_dacheteurs;
        } while (nombre_dacheteurs <= 0);

        if (nombre_dacheteurs == 1)
        {
            do
            {
                std::cout << "Entrez le budget mensuel ($): ";
                std::cin >> budget_total;
            } while (budget_total <= 0);
        }
        else
        {
            for (int i = 0; i < nombre_dacheteurs; i++)
            {
                do
                {
                    std::cout << "Entrez le budget mensuel du copropriétaire " << i + 1 << " ($): ";
                    std::cin >> budgets_coproprietaires[i];
                } while (budgets_coproprietaires[i] <= 0);

                budget_total += budgets_coproprietaires[i];
            }
        }

        std::cout << "Ok! Votre budget mensuel total est de $" << std::setprecision(2) << std::fixed << budget_total << std::endl;

        std::cout << "" << std::endl;

        do
        {
            std::cout << "Prix de la propriété ($): ";
            std::cin >> prix_propriete;
        } while (prix_propriete <= 0);
        
        do
        {
            std::cout << "Mise de fonds ($): ";
            std::cin >> mise_de_fonds;
        } while (mise_de_fonds <= 0);
        
        do
        {
            std::cout << "Taux d'intérêt annuel (%): ";
            std::cin >> interet_annuel;
        } while (interet_annuel <= 0);
        
        do
        {
            std::cout << "Amortissement (années): ";
            std::cin >> periode_amortissement;
        } while (periode_amortissement <= 0);
        
    }
}