#include "pojazd_hybrydowy.h"

// Konstruktor pusty
PojazdHybrydowy::PojazdHybrydowy()
    : Pojazd(), wspolczynnik_odzyskiwania_energii(0), dystans_hamowania(0) {}

// Konstruktor kopiuj¹cy
PojazdHybrydowy::PojazdHybrydowy(const PojazdHybrydowy& inny)
    : Pojazd(inny), wspolczynnik_odzyskiwania_energii(inny.wspolczynnik_odzyskiwania_energii),
    dystans_hamowania(inny.dystans_hamowania) {}

// Konstruktor przenosz¹cy
PojazdHybrydowy::PojazdHybrydowy(PojazdHybrydowy&& inny) noexcept
    : Pojazd(std::move(inny)), wspolczynnik_odzyskiwania_energii(inny.wspolczynnik_odzyskiwania_energii),
    dystans_hamowania(inny.dystans_hamowania) {
    inny.wspolczynnik_odzyskiwania_energii = 0;
    inny.dystans_hamowania = 0;
}

// Konstruktor standardowy
PojazdHybrydowy::PojazdHybrydowy(double promien_kola, double pokonany_dystans, double spalanie_na_kolo,
    double wspolczynnik_odzyskiwania_energii, double dystans_hamowania)
    : Pojazd(promien_kola, pokonany_dystans, spalanie_na_kolo),
    wspolczynnik_odzyskiwania_energii(wspolczynnik_odzyskiwania_energii),
    dystans_hamowania(dystans_hamowania) {}


PojazdHybrydowy::~PojazdHybrydowy() {}


double PojazdHybrydowy::getWspolczynnikOdzyskiwaniaEnergii() const {
    return wspolczynnik_odzyskiwania_energii;
}

double PojazdHybrydowy::getDystansHamowania() const {
    return dystans_hamowania;
}



void PojazdHybrydowy::setWspolczynnikOdzyskiwaniaEnergii(double wspolczynnik_odzyskiwania_energii) {
    this->wspolczynnik_odzyskiwania_energii = wspolczynnik_odzyskiwania_energii;
}

void PojazdHybrydowy::setDystansHamowania(double dystans_hamowania) {
    this->dystans_hamowania = dystans_hamowania;
}



double PojazdHybrydowy::obliczSpalanie() const {
    return getSpalanieNaKolo() * (1 - wspolczynnik_odzyskiwania_energii);
}


void PojazdHybrydowy::opis() const {
    std::cout << "Pojazd Hybrydowy: " << std::endl;
    Pojazd::opis();
    std::cout << "Wspolczynnik odzyskiwania energii: " << wspolczynnik_odzyskiwania_energii << std::endl;
    std::cout << "Dystans hamowania: " << dystans_hamowania << std::endl;
}