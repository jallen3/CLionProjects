#include "Vehicle.h"
#include "Showroom.h"
#include "Dealership.h"
#include <iostream>
#include <limits>
#include <memory>
#include <iomanip>
using namespace std;

void TestOne();
void TestTwo();
void TestThree();
void TestFour(Vehicle vehicles[]);
void TestFive(Vehicle v[]);
void TestSix(Vehicle v[]);
void TestSeven(Vehicle v[]);

int main()
{
    // Initialize some data. It's hard-coded here, but this data could come from a file, database, etc
    Vehicle vehicles[] =
            {
                    Vehicle("Ford", "Mustang", 1973, 9500, 113000),
                    Vehicle("Mazda", "CX-5", 2017, 24150, 5900),
                    Vehicle("Dodge", "Charger", 2016, 18955, 9018),
                    Vehicle("Tesla", "Model S", 2018, 74500, 31),
                    Vehicle("Toyota", "Prius", 2015, 17819, 22987),
                    Vehicle("Nissan", "Leaf", 2016, 12999, 16889),
                    Vehicle("Chevrolet", "Volt", 2015, 16994, 12558),
            };

    // Set the precision for showing prices with 2 decimal places
    cout << std::fixed << std::setprecision(2);

    int testNum;
    cin >> testNum;

    if (testNum == 1)
        TestOne();
    else if (testNum == 2)
        TestTwo();
    else if (testNum == 3)
        TestThree();
    else if (testNum == 4)
        TestFour(vehicles);
    else if (testNum == 5)
        TestFive(vehicles);
    else if (testNum == 6)
        TestSix(vehicles);
    else if (testNum == 7)
        TestSeven(vehicles);

    return 0;
}

void TestOne()
{
    // Test the default constructors of all the classes
    Vehicle testVehicle;
    testVehicle.Display();
}

void TestTwo()
{
    Showroom testShowroom;
    testShowroom.ShowInventory();
}

void TestThree()
{
    Dealership testDealership;
    testDealership.ShowInventory();
}
