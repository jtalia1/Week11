// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#include "Car.h"
#include <iostream>

using namespace std;

// Default constructor initializing member variables to default values
Car::Car() : Vehicle(), numberOfDoors(0) {}

// Parameterized constructor initializing member variables to given values
Car::Car(string manufacturer, int yearBuilt, int numberOfDoors)
    : Vehicle(manufacturer, yearBuilt), numberOfDoors(numberOfDoors) {}

// Setter for number of doors
void Car::setNumberOfDoors(int numberOfDoors) {
    this->numberOfDoors = numberOfDoors;
}

// Getter for number of doors
int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

// Show car information
void Car::displayInfo() const {
    // Call base class method to show vehicle info
    Vehicle::displayInfo();
    // Show info specific to car
    cout << "Number of Doors: " << numberOfDoors << endl;
}
