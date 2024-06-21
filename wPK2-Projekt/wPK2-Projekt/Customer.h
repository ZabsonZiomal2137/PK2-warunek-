#pragma once
#include <string>
#include <iostream>

class Customer {
public:
    Customer(const std::string& name, const std::string& contact, const std::string& license);
    std::string getName() const;
    std::string getContact() const;
    std::string getLicense() const;
    friend std::ostream& operator<<(std::ostream& os, const Customer& customer);
private:
    std::string name;
    std::string contact;
    std::string license;
};
