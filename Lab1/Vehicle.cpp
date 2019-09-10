//
// Created by Jada Allen on 8/30/19.
//

#include "Vehicle.h"
using namespace std;

// Definition of the Vehicle class

Vehicle::Vehicle() {}

Vehicle::Vehicle(string make, string model, int year, float price, int mileage) {
    vehicleMake = "COP3503";
    vehicleModel = "Rust Bucket";
    vehicleYear = 1900;
    vehiclePrice = 0;
    vehicleMileage = 0;

}

void Vehicle::Display() const {
    cout << to_string(vehicleYear)+ vehicleMake + vehicleModel + to_string(vehiclePrice) + to_string(vehicleMileage);
}

string Vehicle::GetYearMakeModel() const {
    cout<< to_string(vehicleYear) + vehicleMake + vehicleModel;
}

float Vehicle::GetPrice() const {
    cout<< vehiclePrice;
}
