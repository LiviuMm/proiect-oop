#include "clasa_elevi.h"

namespace Proiect_Scoala {

ClasaElevi::ClasaElevi() : m_nume_clasa("") {}

ClasaElevi::ClasaElevi(const std::string& nume_clasa)
    : m_nume_clasa(nume_clasa) {}

void ClasaElevi::AdaugaElev(const Elev& elev) {
    m_elevi.push_back(elev);
}

void ClasaElevi::AfiseazaElevi() const {
    std::cout << "Elevii din clasa " << m_nume_clasa << ":\n";
    for (const auto& elev : m_elevi) {
        elev.Afiseaza();
    }
}

std::string ClasaElevi::GetNumeClasa() const {
    return m_nume_clasa;
}

}
