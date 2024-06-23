#pragma once
class Element {
public:
    int wartosc;
    Element* nastepny;

    Element(int wartosc, Element* nastepny = nullptr);
};
