#include <iostream>
#include "Persoana.h"
#include "Elev.h"
#include "Profesor.h"

int main() {
    
    Persoana persoana1("Natanael Claudiu Lup", "1980501123456", 30);
    std::cout << persoana1 << std::endl;
    std::cout << "\n";

    
    Elev primul_elev("Ionel Armat", "5010101123456", 17, "11A", 9.32);
    std::cout << primul_elev<< std::endl; 
    std::cout << "\n";

    Profesor primul_profesor("Dani Danutu", "5050610410012", 45, "Educatie Plastica", "7B");
    std::cout << primul_profesor<< std::endl;
    return 0;
}