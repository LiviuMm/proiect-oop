#include "Elev.h"

// Constructor
Elev::Elev(const std::string& nume, const std::string& cnp, int varsta,const std::string& clasa, double medie)
    : Persoana(nume, cnp, varsta), clasa(clasa), medie(medie) {}

// Destructor
Elev::~Elev() {}

// Getteri
std::string Elev::getClasa() const {
    return clasa;
}

double Elev::getMedie() const {
    return medie;
}

// Suprascriere functia afiseaza
void Elev::afiseaza() const {
    Persoana::afiseaza();  // Apeleaza ce afiseaza Persoana
    std::cout << ", Clasa: " << clasa << ", Medie: " << medie << "\n";
}

// Supraincarcare operator <<
std::ostream& operator<<(std::ostream& os, const Elev& e) {
    os << static_cast<const Persoana&>(e)  // Afișează partea de Persoana
       << ", Clasa: " << e.clasa
       << ", Medie: " << e.medie;
    return os;
}