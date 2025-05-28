#include "nota.h"

namespace Proiect_Scoala {

Nota::Nota(const std::string& materie, double valoare)
    : materie(materie), valoare(valoare) {}

std::ostream& operator<<(std::ostream& os, const Nota& nota) {
    os << "Materie: " << nota.materie << ", Nota: " << nota.valoare;
    return os;
}

}