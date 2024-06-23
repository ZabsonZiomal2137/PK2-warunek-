#pragma once
#include <iostream>

class Pojazd {
private:
    double promien_kola;
    double pokonany_dystans;
    double spalanie_na_kolo;

public:
    // Konstruktor pusty
    Pojazd();

    // Konstruktor kopiuj¹cy
    Pojazd(const Pojazd& inny);

    // Konstruktor przenosz¹cy
    Pojazd(Pojazd&& inny) noexcept;

    // Konstruktor standardowy
    Pojazd(double promien_kola, double pokonany_dystans, double spalanie_na_kolo);

    // Destruktor
    virtual ~Pojazd();

    // Gettery
    double getPromienKola() const;
    double getPokonanyDystans() const;
    double getSpalanieNaKolo() const;

    // Settery
    void setPromienKola(double promien_kola);
    void setPokonanyDystans(double pokonany_dystans);
    void setSpalanieNaKolo(double spalanie_na_kolo);

    // Opis samochodu do terminalu
    virtual void opis() const;
};
