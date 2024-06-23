#include "pracownik_uop.h"

Pracownik_UOP::Pracownik_UOP(double wynagrodzenie_brutto)
    : wynagrodzenie_brutto(wynagrodzenie_brutto) {}

double Pracownik_UOP::oblicz_wynagrodzenie() const {
    return wynagrodzenie_brutto;
}

double Pracownik_UOP::oblicz_sk³adki() const {
    return wynagrodzenie_brutto * 0.1371;  
}

double Pracownik_UOP::oblicz_odliczenia() const {
    return wynagrodzenie_brutto * 0.18; 
}