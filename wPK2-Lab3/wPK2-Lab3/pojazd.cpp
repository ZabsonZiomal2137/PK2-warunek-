#include "pojazd.h"

// Konstruktor pusty
Pojazd::Pojazd() : promien_kola(0), pokonany_dystans(0), spalanie_na_kolo(0) {}

// Konstruktor kopiuj¹cy
Pojazd::Pojazd(const Pojazd& inny)
    : promien_kola(inny.promien_kola), pokonany_dystans(inny.pokonany_dystans), spalanie_na_kolo(inny.spalanie_na_kolo) {}

// Konstruktor przenosz¹cy
Pojazd::Pojazd(Pojazd&& inny) noexcept
    : promien_kola(inny.promien_kola), pokonany_dystans(inny.pokonany_dystans), spalanie_na_kolo(inny.spalanie_na_kolo) {
    inny.promien_kola = 0;
    inny.pokonany_dystans = 0;
    inny.spalanie_na_kolo = 0;
}

// Konstruktor standardowy
Pojazd::Pojazd(double promien_kola, double pokonany_dystans, double spalanie_na_kolo)
    : promien_kola(promien_kola), pokonany_dystans(pokonany_dystans), spalanie_na_kolo(spalanie_na_kolo) {}

// Destruktor
Pojazd::~Pojazd() {}


double Pojazd::getPromienKola() const {
    return promien_kola;
}

double Pojazd::getPokonanyDystans() const {
    return pokonany_dystans;
}

double Pojazd::getSpalanieNaKolo() const {
    return spalanie_na_kolo;
}



void Pojazd::setPromienKola(double promien_kola) {
    this->promien_kola = promien_kola;
}

void Pojazd::setPokonanyDystans(double pokonany_dystans) {
    this->pokonany_dystans = pokonany_dystans;
}

void Pojazd::setSpalanieNaKolo(double spalanie_na_kolo) {
    this->spalanie_na_kolo = spalanie_na_kolo;
}



void Pojazd::opis() const {
    std::cout << std::endl;
    std::cout << "Promien kola: " << promien_kola << std::endl;
    std::cout << "Pokonany dystans: " << pokonany_dystans << std::endl;
    std::cout << "Spalanie na kolo: " << spalanie_na_kolo << std::endl;
    std::cout << std::endl;
}