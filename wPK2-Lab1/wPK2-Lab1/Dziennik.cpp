#include "Dziennik.h"
#include <iostream>

Dziennik::Dziennik() {}

void Dziennik::dodajOcene(const Ocena& ocena) {
    oceny.push_back(ocena);
}

void Dziennik::wyswietlOceny() const {
    for (const auto& ocena : oceny) {
        ocena.print();
    }
}