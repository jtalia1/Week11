// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

// Base class for all vehicles
class Vehicle {
private:
    // Manufacturer of the vehicle
    string manufacturer;
    // Year the vehicle was built
    int yearBuilt;

public:
    // Default constructor
    Vehicle();

    // Parameterized constructor
    Vehicle(string manufacturer, int yearBuilt);

    // Setter for manufacturer
    void setManufacturer(string manufacturer);

    // Getter for manufacturer
    string getManufacturer() const;

    // Setter for year built
    void setYearBuilt(int yearBuilt);

    // Getter for year built
    int getYearBuilt() const;

    // Show vehicle information (can be overridden in derived classes)
    virtual void displayInfo() const;
};

#endif
