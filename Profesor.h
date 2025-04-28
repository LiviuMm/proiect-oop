#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persoana.h"
#include <string>
#include <iostream>

class Profesor : public Persoana {
    private:
    std::string materie;
    std::string clasa_diriginte;

    public:
    //Constructor 
    Profesor(const std::string& nume, const std::string& cnp, int varsta, const std::string& materie, const std::string& clasa_diriginte);

    //Destructor
    ~Profesor();

    //Getteri
    std::string getMaterie() const;
    std::string getClasa_diriginte() const;

    // Suprascriere functie afisare
    void afiseaza() const override;

    //Supraincarcare orperator << 
    friend std::ostream& operator<<(std::ostream& os, const Profesor& prof);

};

#endif