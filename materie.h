#ifndef MATERIE_H
#define MATERIE_H

#include <string>
#include <iostream>

namespace Proiect_Scoala {

class Materie {
private:
    std::string m_nume;

public:
    Materie();
    Materie(const std::string& numeMaterie);

    std::string GetNume() const;
    void Afiseaza() const;
};

std::ostream& operator<<(std::ostream& os, const Materie& materie);

} 

#endif