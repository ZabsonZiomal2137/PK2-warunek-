#pragma once
class Pracownik {
public:
    virtual ~Pracownik() = default;

    virtual double oblicz_wynagrodzenie() const = 0;
    virtual double oblicz_sk�adki() const = 0;
    virtual double oblicz_odliczenia() const = 0;
};