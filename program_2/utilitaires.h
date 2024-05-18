#include <string>
#include <iostream>

#ifndef UTILITAIRES_H
#define UTILITAIRES_H

int convertir_dollars_vers_centimes(double montant_en_dollars);
std::string formater_argent(int montant_en_centimes);
void garantir_existence_fichier(std::string chemin_fichier);

#endif