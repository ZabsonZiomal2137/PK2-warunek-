#include "RentalSystem.h"
#include "Car.h"
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iostream>
#include "Truck.h"

RentalSystem::~RentalSystem() {
    for (Vehicle* vehicle : vehicles) delete vehicle;
    for (Customer* customer : customers) delete customer;
    for (Reservation* reservation : reservations) delete reservation;
}

void RentalSystem::addVehicle(Vehicle* vehicle) {
    vehicles.push_back(vehicle);
}

void RentalSystem::registerCustomer(Customer* customer) {
    customers.push_back(customer);
}

void RentalSystem::makeReservation(const std::string& customerName, const std::string& vehicleMake, const std::string& vehicleModel) {
    Customer* customer = findCustomer(customerName);
    Vehicle* vehicle = findVehicle(vehicleMake, vehicleModel);

    if (customer && vehicle) {
        reservations.push_back(new Reservation(customer, vehicle));
    }
    else {
        std::cerr << "Reservation failed: Invalid customer or vehicle." << std::endl;
    }
}

void RentalSystem::rentVehicle(const std::string& customerName, const std::string& vehicleMake, const std::string& vehicleModel) {
    Reservation* reservation = findReservation(customerName, vehicleMake, vehicleModel);

    if (reservation) {
        reservation->rent();
    }
    else {
        std::cerr << "Renting failed: Reservation not found." << std::endl;
    }
}

void RentalSystem::returnVehicle(const std::string& customerName, const std::string& vehicleMake, const std::string& vehicleModel) {
    Reservation* reservation = findReservation(customerName, vehicleMake, vehicleModel);

    if (reservation) {
        reservation->returnVehicle();
    }
    else {
        std::cerr << "Returning failed: Reservation not found." << std::endl;
    }
}

void RentalSystem::printReservations() const {
    for (const Reservation* reservation : reservations) {
        std::cout << *reservation << std::endl;
    }
}

void RentalSystem::printVehicles() const {  // Nowa metoda
    for (const Vehicle* vehicle : vehicles) {
        std::cout << *vehicle << std::endl;
    }
}

void RentalSystem::saveVehiclesToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const Vehicle* vehicle : vehicles) {
            if (dynamic_cast<const Car*>(vehicle)) {
                file << "Car," << vehicle->getMake() << "," << vehicle->getModel() << "," << vehicle->getYear() << std::endl;
            }
            else if (dynamic_cast<const Truck*>(vehicle)) {
                file << "Truck," << vehicle->getMake() << "," << vehicle->getModel() << "," << vehicle->getYear() << std::endl;
            }
        }
        file.close();
    }
}


void RentalSystem::loadVehiclesFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string type, make, model;
            int year;
            if (std::getline(iss, type, ',') && std::getline(iss, make, ',') && std::getline(iss, model, ',') && iss >> year) {
                if (type == "Car") {
                    vehicles.push_back(new Car(make, model, year));
                }
                else if (type == "Truck") {
                    vehicles.push_back(new Truck(make, model, year));
                }
            }
        }
        file.close();
    }
}


void RentalSystem::saveCustomersToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const Customer* customer : customers) {
            file << customer->getName() << "," << customer->getContact() << "," << customer->getLicense() << std::endl;
        }
        file.close();
    }
}

void RentalSystem::loadCustomersFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string name, contact, license;
            if (std::getline(iss, name, ',') && std::getline(iss, contact, ',') && std::getline(iss, license, ',')) {
                customers.push_back(new Customer(name, contact, license));
            }
        }
        file.close();
    }
}

Customer* RentalSystem::findCustomer(const std::string& name) {
    for (Customer* c : customers) {
        if (c->getName() == name) {
            return c;
        }
    }
    return nullptr;
}

Vehicle* RentalSystem::findVehicle(const std::string& make, const std::string& model) {
    for (Vehicle* v : vehicles) {
        if (v->getMake() == make && v->getModel() == model) {
            return v;
        }
    }
    return nullptr;
}

Reservation* RentalSystem::findReservation(const std::string& customerName, const std::string& vehicleMake, const std::string& vehicleModel) {
    for (Reservation* r : reservations) {
        if (r->getCustomer()->getName() == customerName &&
            r->getVehicle()->getMake() == vehicleMake &&
            r->getVehicle()->getModel() == vehicleModel) {
            return r;
        }
    }
    return nullptr;
}

void RentalSystem::printCustomers() const {
    for (const Customer* customer : customers) {
        std::cout << *customer << std::endl;
    }
}
