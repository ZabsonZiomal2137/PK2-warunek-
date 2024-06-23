#pragma once
#include "Ocena.h"
#include <vector>

class Dziennik {
private:
    std::vector<Ocena> oceny;

public:
    Dziennik();

    void dodajOcene(const Ocena& ocena);

    void wyswietlOceny() const;
};
