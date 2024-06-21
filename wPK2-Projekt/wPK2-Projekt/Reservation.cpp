#include "Reservation.h"

Reservation::Reservation(Customer* customer, Vehicle* vehicle)
    : customer(customer), vehicle(vehicle), status(RESERVED) {}

Customer* Reservation::getCustomer() const {
    return customer;
}

Vehicle* Reservation::getVehicle() const {
    return vehicle;
}

Reservation::Status Reservation::getStatus() const {
    return status;
}

void Reservation::rent() {
    if (status == RESERVED) {
        status = RENTED;
    }
    else {
        std::cerr << "Cannot rent: Vehicle is not reserved." << std::endl;
    }
}

void Reservation::returnVehicle() {
    if (status == RENTED) {
        status = RETURNED;
    }
    else {
        std::cerr << "Cannot return: Vehicle is not rented." << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Reservation& reservation) {
    os << *reservation.customer << " " << *reservation.vehicle << " (";
    switch (reservation.status) {
    case Reservation::RESERVED: os << "Reserved"; break;
    case Reservation::RENTED: os << "Rented"; break;
    case Reservation::RETURNED: os << "Returned"; break;
    }
    os << ")";
    return os;
}
