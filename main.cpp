#include <iostream>
#include "persoana.h"
#include "elev.h"
#include "profesor.h"
#include "scoala.h"
#include "nota.h"
#include "materie.h"
#include "clasa_elevi.h"
#include "administrator.h"

using namespace Proiect_Scoala;

int main() {
    Materie matematica("Matematica");
    Materie informatica("Informatica");
    Materie romana("Limba si literatura romana");
    Materie EdFizica("Educatie fizica");
    Materie EdCivica("Educatie civica");
    Materie engleza("Engleza");
    Materie fizica("Fizica");
    Materie chimie("Chimie");
    Materie geografie("Geografie");
    Materie biologie("Biologie");

    matematica.Afiseaza();
    informatica.Afiseaza();
    romana.Afiseaza();
    EdFizica.Afiseaza();
    EdCivica.Afiseaza();
    engleza.Afiseaza();
    fizica.Afiseaza();
    chimie.Afiseaza();
    geografie.Afiseaza();
    biologie.Afiseaza();

    Elev elev1("Marian Ionescu", "5060610419080", 19, "12A");
    Elev elev2("Alex Vasile", "5060710738192", 18, "12A");
    Elev elev3("Andrei Valentin", "5060710731234", 18, "12B");
    Elev elev4("Ion Ion", "5060710739876", 18, "12A");
    Elev elev5("Stefan Ioan", "50607107385938", 17, "11A");
    Elev elev6("Iliescu Oprea", "5060710731111", 17, "11A");
    Elev elev7("Mihai Dragos", "5060710737936", 18, "11A");
    Elev elev8("Liviu Marinica", "5060710739762", 17, "12B");
    Elev elev9("Stefan Crisan", "5060710737634", 18, "12B");
    
    Nota nota1("Matematica", 9.15);
    Nota nota2("Informatica", 9.80);
    Nota nota3("Educatie Civica", 8.20);
    Nota nota4("Limba si literatura romana", 7.35);
    Nota nota5("Fizica", 3.60);
    Nota nota6("Geografie", 6.90);
    Nota nota7("Engelza", 5.50);

    elev1.AdaugaNota(nota1);
    elev1.AdaugaNota(nota6);
    elev2.AdaugaNota(nota4);
    elev2.AdaugaNota(nota2);
    elev3.AdaugaNota(nota4);
    elev3.AdaugaNota(nota1);
    elev4.AdaugaNota(nota6);
    elev4.AdaugaNota(nota5);
    elev5.AdaugaNota(nota3);
    elev5.AdaugaNota(nota7);
    elev6.AdaugaNota(nota4);
    elev6.AdaugaNota(nota3);
    elev7.AdaugaNota(nota5);
    elev7.AdaugaNota(nota4);
    elev8.AdaugaNota(nota1);
    elev8.AdaugaNota(nota7);
    elev9.AdaugaNota(nota3);
    elev9.AdaugaNota(nota6);

    
    ClasaElevi clasa12A("12A");
    ClasaElevi clasa12B("12B");
    ClasaElevi clasa11A("11A");
    
    clasa12A.AdaugaElev(elev1);
    clasa12A.AdaugaElev(elev2);
    clasa12B.AdaugaElev(elev3);
    clasa12A.AdaugaElev(elev4);
    clasa11A.AdaugaElev(elev5);
    clasa11A.AdaugaElev(elev6);
    clasa11A.AdaugaElev(elev7);
    clasa12B.AdaugaElev(elev8);
    clasa12B.AdaugaElev(elev9);
    
    clasa11A.AfiseazaElevi();
    clasa12A.AfiseazaElevi();
    clasa12B.AfiseazaElevi();

    // Profesori
    Profesor prof1("Gabriela Ionescu", "2233445566778", 45, "Matematica", "12A");
    Profesor prof2("Mihai Gheorghe", "5566778899001", 50, "Informatica", "11A");
    Profesor prof3("Mihai Claudiu", "2233445566778", 55, "Fizica", "11A");
    Profesor prof4("Dan Ion", "5566778899006", 54, "Limba si literatura romana", "12A");
    Profesor prof5("Andrei Popa", "5566778899004", 30, "Chimie", "12B");
    Profesor prof6("Liviu Ilie", "5566778899005", 29, "Biologie", "12B");
    Profesor prof7("Ionel Oprea", "5566778899003", 40, "Informatica", "12A");
    Profesor prof8("Daniel Cristea", "5566778899002", 37, "Educatie Fizica", "11A");

    std::cout << " Profesorii \n";

    prof1.Afiseaza();
    prof2.Afiseaza();
    prof3.Afiseaza();
    prof4.Afiseaza();
    prof5.Afiseaza();
    prof6.Afiseaza();
    prof7.Afiseaza();
    prof8.Afiseaza();

    
    Administrator admin("Andrei Popescu", "secretar");
    admin.Afiseaza();


    Scoala scoala;
    scoala.AdaugaElev(elev1);
    scoala.AdaugaElev(elev2);
    scoala.AdaugaElev(elev3);
    scoala.AdaugaElev(elev4);
    scoala.AdaugaElev(elev5);
    scoala.AdaugaElev(elev6);
    scoala.AdaugaElev(elev7);
    scoala.AdaugaElev(elev8);
    scoala.AdaugaElev(elev9);
    scoala.AdaugaProfesor(prof1);
    scoala.AdaugaProfesor(prof2);
    scoala.AdaugaProfesor(prof3);
    scoala.AdaugaProfesor(prof4);
    scoala.AdaugaProfesor(prof5);
    scoala.AdaugaProfesor(prof6);
    scoala.AdaugaProfesor(prof7);
    scoala.AdaugaProfesor(prof8);
    scoala.AfiseazaElevi();
    scoala.AfiseazaProfesori();

    // Cautare elev
    std::string nume_cautat = "Alex Vasile";
    if (scoala.CautaElev(nume_cautat)) {
        std::cout << "Elevul \"" << nume_cautat << "\" a fost găsit în școală." << std::endl;
    } else {
        std::cout << "Elevul \"" << nume_cautat << "\" nu a fost găsit." << std::endl;
    }


    nume_cautat = "George Enescu";
    if (scoala.CautaElev(nume_cautat)) {
        std::cout << "Elevul \"" << nume_cautat << "\" a fost găsit în școală." << std::endl;
    } else {
        std::cout << "Elevul \"" << nume_cautat << "\" nu a fost găsit." << std::endl;
    }
    return 0;
}