#pragma once
#include <string>
#include <iostream>

class Vehicle {
public:
    Vehicle(const std::string& make, const std::string& model, int year);
    virtual ~Vehicle() = default;
    virtual std::string getType() const = 0;
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);

protected:
    std::string make;
    std::string model;
    int year;
};
