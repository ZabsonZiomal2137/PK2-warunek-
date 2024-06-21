#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(const std::string& make, const std::string& model, int year);
    std::string getType() const override;
};

