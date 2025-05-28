#ifndef CLASAELEVI_H
#define CLASAELEVI_H

#include <string>
#include <vector>
#include <iostream>
#include "Elev.h" 

namespace Proiect_Scoala {

class ClasaElevi {
private:
    std::string m_nume_clasa;
    std::vector<Elev> m_elevi;
public:
    
    ClasaElevi();
    ClasaElevi(const std::string &numeClasa);
    
    void AdaugaElev(const Elev &elev);
    
    void AfiseazaElevi() const;
       std::string GetNumeClasa() const;
};

}  

#endif  
