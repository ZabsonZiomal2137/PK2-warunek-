#pragma once
#include "pojazd.h"

class Jednoslad : public Pojazd {
public:
    // Konstruktor pusty
    Jednoslad();

    // Konstruktor kopiujący
    Jednoslad(const Jednoslad& inny);

    // Konstruktor przenoszący
    Jednoslad(Jednoslad&& inny) noexcept;

    // Konstruktor standardowy
    Jednoslad(double promien_kola, double pokonany_dystans, double spalanie_na_kolo);


    ~Jednoslad();


    void opis() const override;
};

