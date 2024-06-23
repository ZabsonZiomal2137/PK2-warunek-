#pragma once
#include "Vehicle.h"

class Truck : public Vehicle {
public:
    Truck(const std::string& make, const std::string& model, int year);
    std::string getType() const override;

    Truck operator+(const Truck& other) const;
    Truck operator-(const Truck& other) const;
};
