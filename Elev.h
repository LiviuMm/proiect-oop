#ifndef ELEV_H
#define ELEV_H

#include "persoana.h"
#include "nota.h"
#include <vector>
#include <string>
#include <iostream>

namespace Proiect_Scoala {

class Elev : public Persoana {
private:
    std::string m_clasa;
    std::vector<Nota> m_note;

public:
    Elev(const std::string& nume, const std::string& cnp, int varsta, const std::string& clasa);
    ~Elev();

    std::string GetClasa() const;
    void AdaugaNota(const Nota& nota);
    void AfiseazaNote() const;

    void Afiseaza() const override;

    friend std::ostream& operator<<(std::ostream& os, const Elev& elev);
};

} // namespace Proiect_Scoala

#endif
