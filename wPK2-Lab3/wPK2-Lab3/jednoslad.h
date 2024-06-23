#pragma once
#include "pojazd.h"

class Jednoslad : public Pojazd {
public:
    // Konstruktor pusty
    Jednoslad();

    // Konstruktor kopiuj¹cy
    Jednoslad(const Jednoslad& inny);

    // Konstruktor przenosz¹cy
    Jednoslad(Jednoslad&& inny) noexcept;

    // Konstruktor standardowy
    Jednoslad(double promien_kola, double pokonany_dystans, double spalanie_na_kolo);


    ~Jednoslad();


    void opis() const override;
};

