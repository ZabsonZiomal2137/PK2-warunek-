#pragma once
#include "Element.h"

class Stack {
private:
    Element* top;

public:
    Stack();
    ~Stack();

    Stack& operator+=(int wartosc);
    Stack& operator-=(int wartosc);
    int operator[](int index) const;
    Stack& operator>>(int wartosc);
    int operator<<(int& wartosc);

    bool isEmpty() const;
    void clear();
};