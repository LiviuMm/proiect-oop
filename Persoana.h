#ifndef PERSOANA_H
#define PERSOANA_H

#include <string>
#include <iostream>

namespace Proiect_Scoala {

class Persoana {
protected:
    std::string m_nume;
    std::string m_cnp;
    int m_varsta;

public:
    Persoana(const std::string& nume = "", const std::string& cnp = "", int varsta = 0);
    virtual ~Persoana();

    std::string GetNume() const;
    std::string GetCNP() const;
    int GetVarsta() const;

    void SetVarsta(int varsta);

    virtual void Afiseaza() const;

    friend std::ostream& operator<<(std::ostream& os, const Persoana& persoana);
};

} 

#endif