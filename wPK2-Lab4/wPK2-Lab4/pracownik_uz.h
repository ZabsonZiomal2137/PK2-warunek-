#pragma once
#include "pracownik.h"

class Pracownik_UZ : public Pracownik {
private:
    double wynagrodzenie_brutto;

public:
    Pracownik_UZ(double wynagrodzenie_brutto);

    double oblicz_wynagrodzenie() const override;
    double oblicz_sk�adki() const override;
    double oblicz_odliczenia() const override;
};
