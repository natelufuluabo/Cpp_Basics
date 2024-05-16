#include <iostream>
#include <string>
#include <sstream>
#include "affichages.h"

int convertir_dollars_vers_centimes(float montant_en_dollars)
{
    return montant_en_dollars * 100;
}

std::string formater_argent(int montant_en_centimes)
{
    float montant_en_dollar = (float) montant_en_centimes/ 100;

    std::string number_str = std::to_string(montant_en_dollar);
    size_t point_position = number_str.find('.'); 
    if (point_position != std::string::npos) {
        number_str = number_str.substr(0, point_position + 3); 
    }

    for (int i = number_str.length() - 3; i > 0; i -= 3)
    {
        if (number_str[i] == '.') continue;
        else number_str.insert(i, ",");
    }

    return number_str + "$";
}