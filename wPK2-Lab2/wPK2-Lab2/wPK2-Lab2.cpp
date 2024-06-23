#include "Stack.h"
#include <iostream>

int main() {
    Stack stos;


    stos >> 10;
    stos >> 20;
    stos >> 30;


    std::cout << "Element na szczycie stosu: " << stos[0] << std::endl;
    std::cout << "Drugi element na stosie: " << stos[1] << std::endl;
    std::cout << "Trzeci element na stosie: " << stos[2] << std::endl;


    stos += 5;
    std::cout << "\nPo dodaniu 5 do wszystkich elementow:" << std::endl;
    std::cout << "Element na szczycie stosu: " << stos[0] << std::endl;
    std::cout << "Drugi element na stosie: " << stos[1] << std::endl;
    std::cout << "Trzeci element na stosie: " << stos[2] << std::endl;


    stos -= 3;
    std::cout << "\nPo odjeciu 3 od wszystkich elementow:" << std::endl;
    std::cout << "Element na szczycie stosu: " << stos[0] << std::endl;
    std::cout << "Drugi element na stosie: " << stos[1] << std::endl;
    std::cout << "Trzeci element na stosie: " << stos[2] << std::endl;


    int wartosc;
    stos << wartosc;
    std::cout << "\nUsunieto element ze szczytu stosu: " << wartosc << std::endl;

    stos << wartosc;
    std::cout << "\nUsunieto element ze szczytu stosu: " << wartosc << std::endl;

    stos << wartosc;
    std::cout << "\nUsunieto element ze szczytu stosu: " << wartosc << std::endl;

    return 0;
}