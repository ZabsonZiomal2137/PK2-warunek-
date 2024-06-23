#include <iostream>
#include "pojazd.h"
#include "jednoslad.h"
#include "pojazd_hybrydowy.h"

int main() {
    // Tworzenie obiektu Pojazd
    Pojazd pojazd(0.3, 1500, 7.5);
    pojazd.opis();

    // Tworzenie obiektu Jednoslad
    Jednoslad rower(0.2, 500, 0.0);
    rower.opis();

    // Tworzenie obiektu PojazdHybrydowy
    PojazdHybrydowy hybryda(0.35, 2000, 5.0, 0.2, 50);
    hybryda.opis();
    std::cout << "Obliczone spalanie hybrydy: " << hybryda.obliczSpalanie() << std::endl;

    return 0;
}