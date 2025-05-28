#include "materie.h"

namespace Proiect_Scoala {

Materie::Materie() : m_nume("") {}

Materie::Materie(const std::string& numeMaterie) : m_nume(numeMaterie) {}

std::string Materie::GetNume() const {
    return m_nume;
}

void Materie::Afiseaza() const {
    std::cout << *this << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Materie& materie) {
    os << " Materie - " << materie.GetNume();
    return os;
}

} 
