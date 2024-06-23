#pragma once
#include <string>

class Ocena {
private:
    int liczba_punktow;
    int max_liczba_punktow;
    std::string data;
    std::string przedmiot;

public:
    Ocena();  

    int getLiczbaPunktow() const;
    int getMaxLiczbaPunktow() const;
    std::string getData() const;
    std::string getPrzedmiot() const;

    void setLiczbaPunktow(int liczba_punktow);
    void setMaxLiczbaPunktow(int max_liczba_punktow);
    void setData(const std::string& data);
    void setPrzedmiot(const std::string& przedmiot);

    void print() const;
};
