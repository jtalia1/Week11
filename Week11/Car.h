// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

// Derived class from Vehicle representing a Car
class Car : public Vehicle {
private:
    // Number of doors on the car
    int numberOfDoors;

public:
    // Default constructor
    Car();

    // Parameterized constructor
    Car(string manufacturer, int yearBuilt, int numberOfDoors);

    // Setter for number of doors
    void setNumberOfDoors(int numberOfDoors);

    // Getter for number of doors
    int getNumberOfDoors() const;

    // Show car information (overrides base class method)
    void displayInfo() const override;
};

#endif

