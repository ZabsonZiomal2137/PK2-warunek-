#include <iostream>
#include "RentalSystem.h"
#include "Car.h"
#include "Truck.h"

void printMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. Add vehicle\n";
    std::cout << "2. Register customer\n";
    std::cout << "3. Make reservation\n";
    std::cout << "4. Rent vehicle\n";
    std::cout << "5. Return vehicle\n";
    std::cout << "6. Display reservations\n";
    std::cout << "7. Display vehicles\n";
    std::cout << "8. Display customers\n";
    std::cout << "9. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    RentalSystem rentalSystem;

    rentalSystem.loadVehiclesFromFile("vehicles.txt");
    rentalSystem.loadCustomersFromFile("customers.txt");

    int choice;

    while (true) {
        printMenu();
        std::cin >> choice;
        std::cin.ignore(); // Ignore newline after choice input

        if (choice == 9) break;

        std::string make, model, name, contact, license;
        int year;

        switch (choice) {
        case 1:
            std::cout << "Add vehicle:\n";
            std::cout << "1. Car\n";
            std::cout << "2. Truck\n";
            std::cout << "Choose vehicle type: ";
            int vehicleType;
            std::cin >> vehicleType;
            std::cin.ignore();
            std::cout << "Make: ";
            std::getline(std::cin, make);
            std::cout << "Model: ";
            std::getline(std::cin, model);
            std::cout << "Year: ";
            std::cin >> year;
            std::cin.ignore();
            if (vehicleType == 1) {
                rentalSystem.addVehicle(new Car(make, model, year));
            }
            else if (vehicleType == 2) {
                rentalSystem.addVehicle(new Truck(make, model, year));
            }
            std::cout << "Vehicle added.\n";
            break;
        case 2:
            std::cout << "Register customer:\n";
            std::cout << "Name: ";
            std::getline(std::cin, name);
            std::cout << "Contact: ";
            std::getline(std::cin, contact);
            std::cout << "License: ";
            std::getline(std::cin, license);
            rentalSystem.registerCustomer(new Customer(name, contact, license));
            std::cout << "Customer registered.\n";
            break;
        case 3:
            std::cout << "Make reservation:\n";
            std::cout << "Customer name: ";
            std::getline(std::cin, name);
            std::cout << "Vehicle make: ";
            std::getline(std::cin, make);
            std::cout << "Vehicle model: ";
            std::getline(std::cin, model);
            rentalSystem.makeReservation(name, make, model);
            std::cout << "Reservation made.\n";
            break;
        case 4:
            std::cout << "Rent vehicle:\n";
            std::cout << "Customer name: ";
            std::getline(std::cin, name);
            std::cout << "Vehicle make: ";
            std::getline(std::cin, make);
            std::cout << "Vehicle model: ";
            std::getline(std::cin, model);
            rentalSystem.rentVehicle(name, make, model);
            std::cout << "Vehicle rented.\n";
            break;
        case 5:
            std::cout << "Return vehicle:\n";
            std::cout << "Customer name: ";
            std::getline(std::cin, name);
            std::cout << "Vehicle make: ";
            std::getline(std::cin, make);
            std::cout << "Vehicle model: ";
            std::getline(std::cin, model);
            rentalSystem.returnVehicle(name, make, model);
            std::cout << "Vehicle returned.\n";
            break;
        case 6:
            rentalSystem.printReservations();
            break;
        case 7:
            rentalSystem.printVehicles();
            break;
        case 8:
            rentalSystem.printCustomers();
            break;
        default:
            std::cout << "Invalid option.\n";
            break;
        }
    }

    rentalSystem.saveVehiclesToFile("vehicles.txt");
    rentalSystem.saveCustomersToFile("customers.txt");

    return 0;
}