#pragma once

#include "Customer.h"

class VIPCustomer : public Customer {
public:
    VIPCustomer(const std::string& name, const std::string& contactInfo, const std::string& drivingLicense, int vipLevel)
        : Customer(name, contactInfo, drivingLicense), vipLevel(vipLevel) {}

    void display(std::ostream& os) const override {
        os << "VIP Customer - Name: " << name << ", Contact Info: " << contactInfo << ", Driving License: " << drivingLicense << ", VIP Level: " << vipLevel;
    }

private:
    int vipLevel;
};