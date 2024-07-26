// Week 11
// Jenna Stone
// CIS 1202 201
// July 26th, 2024

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

// Function to validate and get a valid manufacturer name
string getValidatedManufacturer() {
    string manufacturer;
    bool valid;
    do {
        valid = true;
        cout << "Enter the manufacturer: ";
        getline(cin, manufacturer);
        for (char c : manufacturer) {
            if (!isalpha(c) && c != ' ') {
                valid = false;
                break;
            }
        }
        if (!valid) {
            cout << "Invalid input. Please enter letters only." << endl;
        }
    } while (!valid);
    return manufacturer;
}

// Function to validate and get a valid integer value
int getValidatedInt(const string& prompt) {
    int value;
    bool valid;
    do {
        valid = true;
        cout << prompt;
        cin >> value;
        if (cin.fail() || value <= 0) {
            cin.clear(); // clear the error flag
            cin.ignore(10000, '\n'); // discard invalid input
            valid = false;
            cout << "Invalid input. Please enter a positive number." << endl;
        }
        else {
            cin.ignore(10000, '\n'); // discard any extraneous input
        }
    } while (!valid);
    return value;
}

int main() {
    string manufacturer;
    int yearBuilt;
    int numberOfDoors;
    int towingCapacity;

    // Test Vehicle
    manufacturer = getValidatedManufacturer();
    yearBuilt = getValidatedInt("Enter the year the Vehicle was built: ");
    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "\nVehicle Information:\n";
    vehicle.displayInfo();

    // Test Car
    manufacturer = getValidatedManufacturer();
    yearBuilt = getValidatedInt("Enter the year the Car was built: ");
    numberOfDoors = getValidatedInt("How many doors does the Car have? ");
    Car car(manufacturer, yearBuilt, numberOfDoors);
    cout << "\nCar Information:\n";
    car.displayInfo();

    // Test Truck
    manufacturer = getValidatedManufacturer();
    yearBuilt = getValidatedInt("Enter the year the Truck was built: ");
    towingCapacity = getValidatedInt("Enter the towing capacity for the Truck (in pounds): ");
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "\nTruck Information:\n";
    truck.displayInfo();

    return 0;
}
