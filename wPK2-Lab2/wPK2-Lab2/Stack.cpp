#include "Stack.h"

#include <stdexcept>

Stack::Stack() : top(nullptr) {}

Stack::~Stack() {
    clear();
}

// Operator +=
Stack& Stack::operator+=(int wartosc) {
    for (Element* current = top; current != nullptr; current = current->nastepny) {
        current->wartosc += wartosc;
    }
    return *this;
}

// Operator -=
Stack& Stack::operator-=(int wartosc) {
    for (Element* current = top; current != nullptr; current = current->nastepny) {
        current->wartosc -= wartosc;
    }
    return *this;
}

// Operator []
int Stack::operator[](int index) const {
    Element* current = top;
    for (int i = 0; i < index; ++i) {
        if (current == nullptr) {
            throw std::out_of_range("Index out of range");
        }
        current = current->nastepny;
    }
    if (current == nullptr) {
        throw std::out_of_range("Index out of range");
    }
    return current->wartosc;
}

// Operator >>
Stack& Stack::operator>>(int wartosc) {
    Element* newElement = new Element(wartosc, top);
    top = newElement;
    return *this;
}

// Operator <<
int Stack::operator<<(int& wartosc) {
    if (isEmpty()) {
        throw std::underflow_error("Stack is empty");
    }
    Element* oldTop = top;
    wartosc = top->wartosc;
    top = top->nastepny;
    delete oldTop;
    return wartosc;
}


bool Stack::isEmpty() const {
    return top == nullptr;
}


void Stack::clear() {
    while (!isEmpty()) {
        int wartosc;
        *this << wartosc;  // Usuwanie elementu ze szczytu
    }
}