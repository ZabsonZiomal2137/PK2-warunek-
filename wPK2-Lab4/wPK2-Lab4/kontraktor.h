#pragma once
#include "pracownik.h"

class Kontraktor : public Pracownik {
private:
    double stawka_godzinowa;
    int liczba_godzin;

public:
    Kontraktor(double stawka_godzinowa, int liczba_godzin);

    double oblicz_wynagrodzenie() const override;
    double oblicz_sk³adki() const override;
    double oblicz_odliczenia() const override;
};
