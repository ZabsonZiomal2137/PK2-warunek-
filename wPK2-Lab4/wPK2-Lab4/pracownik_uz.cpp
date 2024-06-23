#include "pracownik_uz.h"

Pracownik_UZ::Pracownik_UZ(double wynagrodzenie_brutto)
    : wynagrodzenie_brutto(wynagrodzenie_brutto) {}

double Pracownik_UZ::oblicz_wynagrodzenie() const {
    return wynagrodzenie_brutto;
}

double Pracownik_UZ::oblicz_sk³adki() const {
    return wynagrodzenie_brutto * 0.1371;  
}

double Pracownik_UZ::oblicz_odliczenia() const {
    return wynagrodzenie_brutto * 0.18; 
}