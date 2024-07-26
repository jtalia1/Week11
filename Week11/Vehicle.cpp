// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#include "Vehicle.h"
#include <iostream>

using namespace std;

// Default constructor initializing member variables to default values
Vehicle::Vehicle() : manufacturer(""), yearBuilt(0) {}

// Parameterized constructor initializing member variables to given values
Vehicle::Vehicle(string manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

// Setter for manufacturer
void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

// Getter for manufacturer
string Vehicle::getManufacturer() const {
    return manufacturer;
}

// Setter for year built
void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

// Getter for year built
int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

// Show vehicle information
void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}
