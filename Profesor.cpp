#include "Profesor.h"

//Constructor 
Profesor::Profesor(const std::string& nume, const std::string& cnp, int varsta, const std::string& materie, const std::string& clasa_diriginte)
    : Persoana(nume, cnp, varsta), materie(materie), clasa_diriginte(clasa_diriginte) {}

//Destructor 
Profesor::~Profesor() {}

//Getteri
std::string Profesor::getMaterie() const{
    return materie;
}
std::string Profesor::getClasa_diriginte() const{
    return clasa_diriginte;
}
// Suprascriere functia afiseaza
void Profesor::afiseaza() const{
    Persoana::afiseaza();
    std::cout<< ", Materia predata: " <<materie << ", Clasa la care este diriginte: "<< clasa_diriginte<< "\n";
}

//Supraincarcare operator << 
std::ostream& operator<<(std::ostream& os, const Profesor& prof) {
    os << static_cast<const Persoana&>(prof)  // Afișează partea de Persoana
    << ", Materia predata: " << prof.materie
    << ", Clasa la care este diriginte: " << prof.clasa_diriginte;
 return os;
}
