#include "jednoslad.h"

// Konstruktor pusty
Jednoslad::Jednoslad() : Pojazd() {}

// Konstruktor kopiuj�cy
Jednoslad::Jednoslad(const Jednoslad& inny) : Pojazd(inny) {}

// Konstruktor przenosz�cy
Jednoslad::Jednoslad(Jednoslad&& inny) noexcept : Pojazd(std::move(inny)) {}

// Konstruktor standardowy
Jednoslad::Jednoslad(double promien_kola, double pokonany_dystans, double spalanie_na_kolo)
    : Pojazd(promien_kola, pokonany_dystans, spalanie_na_kolo) {}


Jednoslad::~Jednoslad() {}


void Jednoslad::opis() const {
    std::cout << "Jednoslad: " << std::endl;
    Pojazd::opis();
}