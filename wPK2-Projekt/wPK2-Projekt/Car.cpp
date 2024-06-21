#include "Car.h"

Car::Car(const std::string& make, const std::string& model, int year)
    : Vehicle(make, model, year) {}

std::string Car::getType() const {
    return "Car";
}
