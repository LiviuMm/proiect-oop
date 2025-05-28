#include "profesor.h"

namespace Proiect_Scoala {

Profesor::Profesor(const std::string& nume, const std::string& cnp, int varsta,
                   const std::string& materie, const std::string& clasa_diriginte)
    : Persoana(nume, cnp, varsta), m_materie(materie), m_clasa_diriginte(clasa_diriginte) {}

Profesor::~Profesor() {}

std::string Profesor::GetMaterie() const {
    return m_materie;
}

std::string Profesor::GetClasaDiriginte() const {
    return m_clasa_diriginte;
}

void Profesor::Afiseaza() const {
    Persoana::Afiseaza();
    std::cout << ", Materie: " << m_materie << ", Diriginte la: " << m_clasa_diriginte << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Profesor& profesor) {
    os << static_cast<const Persoana&>(profesor)
       << ", Materie: " << profesor.m_materie
       << ", Diriginte la: " << profesor.m_clasa_diriginte;
    return os;
}

} 
