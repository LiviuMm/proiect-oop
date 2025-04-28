#include "Persoana.h"

// Constructor
Persoana::Persoana(const std::string& nume, const std::string& cnp, int varsta)
    : nume(nume), cnp(cnp), varsta(varsta) {}

// Destructor
Persoana::~Persoana() {}

// Getteri
std::string Persoana::getNume() const {
    return nume;
}

std::string Persoana::getCNP() const {
    return cnp;
}

int Persoana::getVarsta() const {
    return varsta;
}

// Functie virtuala de afisare
void Persoana::afiseaza() const {
    std::cout << "Nume: " << nume << ", CNP: " << cnp << ", Varsta: " << varsta << "\n";
}

// Supraincarcare operator <<
std::ostream& operator<<(std::ostream& os, const Persoana& p) {
    os << "Nume: " << p.nume << ", CNP: " << p.cnp << ", Varsta: " << p.varsta;
    return os;
}