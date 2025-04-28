#ifndef ELEV_H
#define ELEV_H

#include "Persoana.h"
#include <string>
#include <iostream>

class Elev : public Persoana {
private:
    std::string clasa;
    double medie;

public:
    // Constructor
    Elev(const std::string& nume, const std::string& cnp, int varsta, const std::string& clasa, double medie);

    // Destructor
    ~Elev();

    // Getteri
    std::string getClasa() const;
    double getMedie() const;

    // Suprascriere functie afisare
    void afiseaza() const override;

    // Supraincarcare operator <<
    friend std::ostream& operator<<(std::ostream& os, const Elev& e);
};

#endif
