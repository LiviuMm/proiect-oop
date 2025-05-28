#ifndef PROFESOR_H
#define PROFESOR_H

#include "persoana.h"
#include <string>
#include <iostream>

namespace Proiect_Scoala {

class Profesor : public Persoana {
private:
    std::string m_materie;
    std::string m_clasa_diriginte;

public:
    Profesor(const std::string& nume, const std::string& cnp, int varsta,
             const std::string& materie, const std::string& clasa_diriginte);
    ~Profesor();

    std::string GetMaterie() const;
    std::string GetClasaDiriginte() const;

    void Afiseaza() const override;

    friend std::ostream& operator<<(std::ostream& os, const Profesor& profesor);
};

} 

#endif