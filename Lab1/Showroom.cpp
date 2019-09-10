// Definition of the Showroom class
#include "Showroom.h"
#include "Vehicle.h"
#include <vector>
using namespace std;

 Showroom::Showroom(string name, unsigned int capacity) {
    // cin>> name;
     cout<< "You are currently in Showroom "<< name << endl;
   //  cin>> capacity;
     cout<< "This Showroom has a capacity of "<< capacity;
 }
const vector<Vehicle>& Showroom::GetVehicleList() const {
     return vehicleStorage;
 }

void Showroom::AddVehicle(const Vehicle &v) {
    if(vehicleStorage.size() == maximumCapacity){
        cout<< "Showroom is full! Cannot add " << GetYearMakeModel();
    }

}
 void Showroom::showInventory() const {
    return Vehicle::Display();
 }



// vector <Vehicle> Showroom::vehicleStorage() { }



//for(i = 0; i < vehicleStorage.size(); i++){ }
//add vehicle to showroom vector
//if showroom is at max capacity output error message