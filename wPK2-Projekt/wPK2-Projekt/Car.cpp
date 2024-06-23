#include "Car.h"

Car::Car(const std::string& make, const std::string& model, int year)
    : Vehicle(make, model, year) {}

std::string Car::getType() const {
    return "Car";
}

Car Car::operator+(const Car& other) const {
    int combinedYear = this->year + other.year;
    return Car(this->make, this->model, combinedYear);
}

Car Car::operator-(const Car& other) const {
    int yearDifference = this->year - other.year;
    return Car(this->make, this->model, yearDifference);
}
