#ifndef NOTA_H
#define NOTA_H

#include <string>
#include <iostream>

namespace Proiect_Scoala {

struct Nota {
    std::string materie;
    double valoare;

    Nota(const std::string& materie = "", double valoare = 0.0);
};

std::ostream& operator<<(std::ostream& os, const Nota& nota);

} 

#endif