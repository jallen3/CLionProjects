/*===== #include statements go here =====*/
// strings, vectors, anything you need access to
// Also, if since this class needs to know about Vehicle objects... you need to include "Vehicle.h" as well
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"

/*===== using statements go here =====*/
using namespace std;

class Showroom
{
private:
    // Private stuff goes here: Data members, functions the "outside world" doesn't need to know about
    string showroomName;
    int maximumCapacity;
    //int currentCapacity
    //stores vehicle objects
    vector <Vehicle> vehicleStorage;


public:
    // Functions go here, and any public variables, if you're using them (generally you shouldn't)

    //Default Constructor (all parameters have default values)
    Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0);

    //Accessor
    const vector<Vehicle>& GetVehicleList() const;

    //Behaviors
    void AddVehicle(const Vehicle& v);
    void showInventory() const;
};