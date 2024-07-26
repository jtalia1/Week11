// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#include "Truck.h"
#include <iostream>

using namespace std;

// Default constructor initializing member variables to default values
Truck::Truck() : Vehicle(), towingCapacity(0) {}

// Parameterized constructor initializing member variables to given values
Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

// Setter for towing capacity
void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

// Getter for towing capacity
int Truck::getTowingCapacity() const {
    return towingCapacity;
}

// Show truck information
void Truck::displayInfo() const {
    // Call base class method to show vehicle info
    Vehicle::displayInfo();
    // Show truck-specific info
    cout << "Towing Capacity: " << towingCapacity << " lbs" << endl;
}
