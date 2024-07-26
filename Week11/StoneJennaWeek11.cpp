// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manufacturer;
    int yearBuilt;
    int numberOfDoors;
    int towingCapacity;

    // Test Vehicle
    cout << "Enter the manufacturer for the Vehicle: ";
    getline(cin, manufacturer);
    cout << "Enter the year the Vehicle was built: ";
    cin >> yearBuilt;
    cin.ignore();  // Ignore newline character
    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "\nVehicle Information:\n";
    vehicle.displayInfo();

    // Test Car
    cout << "\nEnter the manufacturer for the Car: ";
    getline(cin, manufacturer);
    cout << "Enter the year the Car was built: ";
    cin >> yearBuilt;
    cout << "How many doors does the Car have? ";
    cin >> numberOfDoors;
    cin.ignore();  // Ignore newline character
    Car car(manufacturer, yearBuilt, numberOfDoors);
    cout << "\nCar Information:\n";
    car.displayInfo();

    // Test Truck
    cout << "\nEnter the manufacturer for the Truck: ";
    getline(cin, manufacturer);
    cout << "Enter the year the Truck was built: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity for the Truck (in pounds): ";
    cin >> towingCapacity;
    cin.ignore();  // Ignore newline character
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "\nTruck Information:\n";
    truck.displayInfo();

    return 0;
}
