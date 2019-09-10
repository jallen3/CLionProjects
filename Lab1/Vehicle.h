/*===== #include statements go here =====*/
#pragma once
#include <string>
#include <iostream>

/*===== using statements go here =====*/
//using std::string;
using namespace std;

class Vehicle
{
private:
    // Private stuff goes here: Data members, functions the "outside world" doesn't need to know about
    string vehicleMake;
    string vehicleModel;
    unsigned int vehicleYear;
    float vehiclePrice;
    unsigned int vehicleMileage;


public:
    // Functions go here, and any public variables, if you're using them (generally you shouldn't)

    //Default Constructor, initializes variables to default variables
    Vehicle();
    Vehicle(string make, string model, int year, float price, int mileage);

    //Print out the vehicle's details in a single line:
    //1973 Ford Mustang $9500 113000
    void Display() const;

    //Create and return a string in the form of "YEAR MAKE MODEL"
    //Example: "1970 Ford Mustang"
    string GetYearMakeModel() const;

    //Return the price
    float GetPrice() const;
};