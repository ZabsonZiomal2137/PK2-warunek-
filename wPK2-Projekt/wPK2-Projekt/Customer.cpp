#include "Customer.h"

Customer::Customer(const std::string& name, const std::string& contact, const std::string& license)
    : name(name), contact(contact), license(license) {}

std::string Customer::getName() const {
    return name;
}

std::string Customer::getContact() const {
    return contact;
}

std::string Customer::getLicense() const {
    return license;
}

std::ostream& operator<<(std::ostream& os, const Customer& customer) {
    os << customer.name << " (" << customer.contact << ", " << customer.license << ")";
    return os;
}