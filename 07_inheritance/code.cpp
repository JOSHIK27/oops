#include <iostream>
using namespace std;

class Vehicle {

    private :
        string type;
        int fuel;
    
    public :

        Vehicle(string t, int f) {
            type = t, fuel = f;
        }
        void printVehicleType() {
            cout<<"The type of this vehicle is " + type<<endl;
        }
        void balanceFuel() {
            cout<<"The balance fuel is " + (to_string(fuel))<<endl;
        }
};

class Car : public Vehicle {
    private :
        string brand;
    public :
        Car(string b, string t, int f) : Vehicle(t, f) {
            brand = b;
        }
        void printBrand() {
            cout<<"The brand is " + brand<<endl;
        }
};

class Bus : public Vehicle {
    private :
        string brand;
    public :
        Bus(string b, string t, int f) : Vehicle(t, f) {
            brand = b;
        }
        void printBrand() {
            cout<<"The brand is " + brand<<endl;
        }
};

int main() {

    Car c("benz", "car", 200);
    c.printVehicleType();
    c.balanceFuel();
    c.printBrand();

    Bus b("Lothian", "bus", 300);
    b.printVehicleType();
    b.balanceFuel();
    b.printBrand();

    // here we avoid writing balance fuel function, vehicle type is 2 different classes 2 types, which increases the readability
}