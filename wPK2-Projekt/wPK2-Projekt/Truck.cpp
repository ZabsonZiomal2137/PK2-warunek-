#include "Truck.h"

Truck::Truck(const std::string& make, const std::string& model, int year)
    : Vehicle(make, model, year) {}

std::string Truck::getType() const {
    return "Truck";
}

