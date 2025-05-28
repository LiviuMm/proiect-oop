#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>
#include <iostream>
#include "persoana.h"

namespace Proiect_Scoala {

class Administrator : public Persoana {
private:
    std::string m_functie;

public:
    Administrator();
    Administrator(const std::string& nume, const std::string& functie);
    void Afiseaza() const override;
};

} 
 #endif