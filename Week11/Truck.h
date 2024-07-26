// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

using namespace std;

// Derived class from Vehicle representing a Truck
class Truck : public Vehicle {
private:
    // Towing capacity of truck in pounds
    int towingCapacity;

public:
    // Default constructor
    Truck();

    // Parameterized constructor
    Truck(string manufacturer, int yearBuilt, int towingCapacity);

    // Setter for towing capacity
    void setTowingCapacity(int towingCapacity);

    // Getter for towing capacity
    int getTowingCapacity() const;

    // Show truck information (overrides base class method)
    void displayInfo() const override;
};

#endif
