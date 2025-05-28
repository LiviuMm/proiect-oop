#include "persoana.h"

namespace Proiect_Scoala {

Persoana::Persoana(const std::string& nume, const std::string& cnp, int varsta)
    : m_nume(nume), m_cnp(cnp), m_varsta(varsta) {}

Persoana::~Persoana() {}

std::string Persoana::GetNume() const { return m_nume; }
std::string Persoana::GetCNP() const { return m_cnp; }
int Persoana::GetVarsta() const { return m_varsta; }

void Persoana::SetVarsta(int varsta) { m_varsta = varsta; }

void Persoana::Afiseaza() const {
    std::cout << "Nume: " << m_nume << ", CNP: " << m_cnp << ", Varsta: " << m_varsta;
}

std::ostream& operator<<(std::ostream& os, const Persoana& persoana) {
    os << "Nume: " << persoana.m_nume
       << ", CNP: " << persoana.m_cnp
       << ", Varsta: " << persoana.m_varsta;
    return os;
}

} 