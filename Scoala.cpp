#include "scoala.h"
#include <iostream>

namespace Proiect_Scoala {

int Scoala::m_total_elevi = 0;
int Scoala::m_total_profesori = 0;

Scoala::Scoala() {}

void Scoala::AdaugaElev(const Elev& elev) {
    m_elevi.push_back(elev);
    ++m_total_elevi;
}

void Scoala::AdaugaProfesor(const Profesor& profesor) {
    m_profesori.push_back(profesor);
    ++m_total_profesori;
}

void Scoala::AfiseazaElevi() const {
    std::cout << "Elevii scolii:\n";
    for (const auto& elev : m_elevi) {
        std::cout << elev << "\n";
    }
}

void Scoala::AfiseazaProfesori() const {
    std::cout << "Profesorii scolii:\n";
    for (const auto& prof : m_profesori) {
        std::cout << prof << "\n";
    }
}

bool Scoala::CautaElev(const std::string& nume) const {
    for (const auto& elev : m_elevi) {
        if (elev.GetNume() == nume) {
            return true;
        }
    }
    return false;
}

int Scoala::GetTotalElevi() {
    return m_total_elevi;
}

int Scoala::GetTotalProfesori() {
    return m_total_profesori;
}

} 