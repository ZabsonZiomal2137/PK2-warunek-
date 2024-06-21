#pragma once
#include "Customer.h"
#include "Vehicle.h"

class Reservation {
public:
    enum Status { RESERVED, RENTED, RETURNED };

    Reservation(Customer* customer, Vehicle* vehicle);
    Customer* getCustomer() const;
    Vehicle* getVehicle() const;
    Status getStatus() const;
    void rent();
    void returnVehicle();
    friend std::ostream& operator<<(std::ostream& os, const Reservation& reservation);
private:
    Customer* customer;
    Vehicle* vehicle;
    Status status;
};

