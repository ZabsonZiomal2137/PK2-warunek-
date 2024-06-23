#include <iostream>
#include "kontraktor.h"
#include "pracownik_uz.h"
#include "pracownik_uop.h"

void testPracownik(Pracownik* pracownik) {
    std::cout << "Wynagrodzenie: " << pracownik->oblicz_wynagrodzenie() << std::endl;
    std::cout << "Skladki: " << pracownik->oblicz_składki() << std::endl;
    std::cout << "Odliczenia: " << pracownik->oblicz_odliczenia() << std::endl;
}

int main() {
    Pracownik* kontraktor = new Kontraktor(100, 160);
    Pracownik* pracownik_uz = new Pracownik_UZ(3000);
    Pracownik* pracownik_uop = new Pracownik_UOP(5000);

    std::cout << "Testowanie kontraktora:" << std::endl;
    testPracownik(kontraktor);

    std::cout << "\nTestowanie pracownika na umowe zlecenie:" << std::endl;
    testPracownik(pracownik_uz);

    std::cout << "\nTestowanie pracownika na umowe o prace:" << std::endl;
    testPracownik(pracownik_uop);


    std::cout << "\nTestowanie dynamic_cast:" << std::endl;
    if (Kontraktor* k = dynamic_cast<Kontraktor*>(kontraktor)) {
        std::cout << "Kontraktor: dynamic_cast udany." << std::endl;
    }
    else {
        std::cout << "Kontraktor: dynamic_cast nieudany." << std::endl;
    }

    if (Pracownik_UZ* uz = dynamic_cast<Pracownik_UZ*>(pracownik_uz)) {
        std::cout << "Pracownik_UZ: dynamic_cast udany." << std::endl;
    }
    else {
        std::cout << "Pracownik_UZ: dynamic_cast nieudany." << std::endl;
    }

    if (Pracownik_UOP* uop = dynamic_cast<Pracownik_UOP*>(pracownik_uop)) {
        std::cout << "Pracownik_UOP: dynamic_cast udany." << std::endl;
    }
    else {
        std::cout << "Pracownik_UOP: dynamic_cast nieudany." << std::endl;
    }

    delete kontraktor;
    delete pracownik_uz;
    delete pracownik_uop;

    return 0;
}