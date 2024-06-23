#include "Truck.h"

Truck::Truck(const std::string& make, const std::string& model, int year)
    : Vehicle(make, model, year) {}

std::string Truck::getType() const {
    return "Truck";
}

Truck Truck::operator+(const Truck& other) const {
    int combinedYear = this->year + other.year;
    return Truck(this->make, this->model, combinedYear);
}

Truck Truck::operator-(const Truck& other) const {
    int yearDifference = this->year - other.year;
    return Truck(this->make, this->model, yearDifference);
}
