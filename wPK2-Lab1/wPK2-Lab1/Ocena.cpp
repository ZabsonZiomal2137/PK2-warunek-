#include "Ocena.h"
#include <iostream>

Ocena::Ocena() : liczba_punktow(0), max_liczba_punktow(0), data(""), przedmiot("") {}

int Ocena::getLiczbaPunktow() const { return liczba_punktow; }
int Ocena::getMaxLiczbaPunktow() const { return max_liczba_punktow; }
std::string Ocena::getData() const { return data; }
std::string Ocena::getPrzedmiot() const { return przedmiot; }

void Ocena::setLiczbaPunktow(int liczba_punktow) { this->liczba_punktow = liczba_punktow; }
void Ocena::setMaxLiczbaPunktow(int max_liczba_punktow) { this->max_liczba_punktow = max_liczba_punktow; }
void Ocena::setData(const std::string& data) { this->data = data; }
void Ocena::setPrzedmiot(const std::string& przedmiot) { this->przedmiot = przedmiot; }

void Ocena::print() const {
    std::cout << "Przedmiot: " << przedmiot << ", Data: " << data
        << ", Liczba punktów: " << liczba_punktow
        << "/" << max_liczba_punktow << std::endl;
}