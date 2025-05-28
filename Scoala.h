#ifndef SCOALA_H
#define SCOALA_H

#include <vector>
#include <string>
#include "elev.h"
#include "profesor.h"

namespace Proiect_Scoala {

class Scoala {
private:
    std::vector<Elev> m_elevi;
    std::vector<Profesor> m_profesori;

    static int m_total_elevi;
    static int m_total_profesori;

public:
    Scoala();

    void AdaugaElev(const Elev& elev);
    void AdaugaProfesor(const Profesor& profesor);

    void AfiseazaElevi() const;
    void AfiseazaProfesori() const;

    bool CautaElev(const std::string& nume) const;

    static int GetTotalElevi();
    static int GetTotalProfesori();
};

} 

#endif