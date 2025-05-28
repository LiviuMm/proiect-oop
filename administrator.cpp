#include "administrator.h"

namespace Proiect_Scoala {

Administrator::Administrator()
    : Persoana(""), m_functie("") {}

Administrator::Administrator(const std::string& nume, const std::string& functie)
    : Persoana(nume), m_functie(functie) {}

void Administrator::Afiseaza() const {
    std::cout << "Administrator: " << m_nume << " - Functie: " << m_functie << std::endl;
}

} 
