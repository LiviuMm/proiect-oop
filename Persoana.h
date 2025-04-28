#ifndef PERSOANA_H
#define PERSOANA_H

#include <string>
#include <iostream>

class Persoana {
protected:
    std::string nume;
    std::string cnp;
    int varsta;

public:
    // Constructor
    Persoana(const std::string& nume, const std::string& cnp, int varsta);

    // Destructor
    virtual ~Persoana();

    // Getteri
    std::string getNume() const;
    std::string getCNP() const;
    int getVarsta() const;

    // Functie virtuala pentru afisare
    virtual void afiseaza() const;

    // Supraincarcare operator <<
    friend std::ostream& operator<<(std::ostream& os, const Persoana& p);
};

#endif
