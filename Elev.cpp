#include "elev.h"

namespace Proiect_Scoala {

Elev::Elev(const std::string& nume, const std::string& cnp, int varsta, const std::string& clasa)
    : Persoana(nume, cnp, varsta), m_clasa(clasa) {}

Elev::~Elev() {}

std::string Elev::GetClasa() const {
    return m_clasa;
}

void Elev::AdaugaNota(const Nota& nota) {
    m_note.push_back(nota);
}

void Elev::AfiseazaNote() const {
    std::cout << "Note pentru " << m_nume << ":\n";
    for (const auto& nota : m_note) {
        std::cout << "  - " << nota << "\n";
    }
}

void Elev::Afiseaza() const {
    Persoana::Afiseaza();
    std::cout << ", Clasa: " << m_clasa << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Elev& elev) {
    os << static_cast<const Persoana&>(elev)
       << ", Clasa: " << elev.m_clasa;
    return os;
}

} // namespace Proiect_Scoala
