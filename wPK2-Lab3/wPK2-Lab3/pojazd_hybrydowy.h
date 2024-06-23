#pragma once
#include "pojazd.h"

class PojazdHybrydowy : public Pojazd {
private:
    double wspolczynnik_odzyskiwania_energii;
    double dystans_hamowania;

public:
    // Konstruktor pusty
    PojazdHybrydowy();

    // Konstruktor kopiuj¹cy
    PojazdHybrydowy(const PojazdHybrydowy& inny);

    // Konstruktor przenosz¹cy
    PojazdHybrydowy(PojazdHybrydowy&& inny) noexcept;

    // Konstruktor standardowy
    PojazdHybrydowy(double promien_kola, double pokonany_dystans, double spalanie_na_kolo,
        double wspolczynnik_odzyskiwania_energii, double dystans_hamowania);


    ~PojazdHybrydowy();


    double getWspolczynnikOdzyskiwaniaEnergii() const;
    double getDystansHamowania() const;


    void setWspolczynnikOdzyskiwaniaEnergii(double wspolczynnik_odzyskiwania_energii);
    void setDystansHamowania(double dystans_hamowania);


    double obliczSpalanie() const;


    void opis() const override;
};

