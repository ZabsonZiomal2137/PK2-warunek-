#pragma once
#include <vector>
#include <list>
#include <string>
#include "Customer.h"
#include "Vehicle.h"
#include "Reservation.h"

class RentalSystem {
public:
    ~RentalSystem();
    void addVehicle(Vehicle* vehicle);
    void registerCustomer(Customer* customer);
    void makeReservation(const std::string& customerName, const std::string& vehicleMake, const std::string& vehicleModel);
    void rentVehicle(const std::string& customerName, const std::string& vehicleMake, const std::string& vehicleModel);
    void returnVehicle(const std::string& customerName, const std::string& vehicleMake, const std::string& vehicleModel);
    void printReservations() const;
    void printVehicles() const;
    void saveVehiclesToFile(const std::string& filename) const;
    void loadVehiclesFromFile(const std::string& filename);
    void saveCustomersToFile(const std::string& filename) const;
    void loadCustomersFromFile(const std::string& filename);
    void printCustomers() const;
private:
    std::vector<Vehicle*> vehicles;
    std::list<Customer*> customers;
    std::list<Reservation*> reservations;

    Customer* findCustomer(const std::string& name);
    Vehicle* findVehicle(const std::string& make, const std::string& model);
    Reservation* findReservation(const std::string& customerName, const std::string& vehicleMake, const std::string& vehicleModel);
};