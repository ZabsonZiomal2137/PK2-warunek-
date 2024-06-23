#include <iostream>
#include "Dziennik.h"
#include "Ocena.h"

int main()
{
    Dziennik dziennik;

    Ocena ocena1;
    ocena1.setPrzedmiot("Matematyka");
    ocena1.setData("2024-06-01");
    ocena1.setLiczbaPunktow(85);
    ocena1.setMaxLiczbaPunktow(100);

    Ocena ocena2;
    ocena2.setPrzedmiot("Fizyka");
    ocena2.setData("2024-06-02");
    ocena2.setLiczbaPunktow(90);
    ocena2.setMaxLiczbaPunktow(100);

    dziennik.dodajOcene(ocena1);
    dziennik.dodajOcene(ocena2);

    dziennik.wyswietlOceny();

}

