#pragma once

#include "Customer.h"

class RegularCustomer : public Customer {
public:
    RegularCustomer(const std::string& name, const std::string& contactInfo, const std::string& drivingLicense)
        : Customer(name, contactInfo, drivingLicense) {}

    void display(std::ostream& os) const override {
        os << "Regular Customer - Name: " << name << ", Contact Info: " << contactInfo << ", Driving License: " << drivingLicense;
    }
};