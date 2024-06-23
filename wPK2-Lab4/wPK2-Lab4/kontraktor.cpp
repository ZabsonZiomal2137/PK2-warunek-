#include "kontraktor.h"

Kontraktor::Kontraktor(double stawka_godzinowa, int liczba_godzin)
    : stawka_godzinowa(stawka_godzinowa), liczba_godzin(liczba_godzin) {}

double Kontraktor::oblicz_wynagrodzenie() const {
    return stawka_godzinowa * liczba_godzin;
}


double Kontraktor::oblicz_sk³adki() const {
    return oblicz_wynagrodzenie() * 0.1371;  
}

double Kontraktor::oblicz_odliczenia() const {
    return oblicz_wynagrodzenie() * 0.18;  
}