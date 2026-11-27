#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;

    void start()
    {
        cout << "Vehicle Started" << endl;
    }
};

class Car : public Vehicle
{
public:
    void carDetails()
    {
        cout << "Car Brand: " << brand << endl;
    }
};

class Bike : public Vehicle
{
public:
    void bikeDetails()
    {
        cout << "Bike Brand: " << brand << endl;
    }
};

class ElectricCar : public Car
{
public:
    void chargeBattery()
    {
        cout << "Electric Car Charging";
    }
};

int main()
{
    Car c;
    c.brand = "Honda";
    c.start();
    c.carDetails();

    ElectricCar e;
    e.brand = "Tata";
    e.start();
    e.carDetails();
    e.chargeBattery();

    return 0;
}