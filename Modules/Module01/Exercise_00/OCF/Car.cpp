#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() : name("default"), speed(0.0) {
    cout << "default constructor" << endl;
}

Car::Car(string n, double s) : name(n), speed(s) {
    cout << "constructor with parameter" << endl;
}

Car::Car(const Car &copy_car) : name(copy_car.name), speed(copy_car.speed){
    cout << "copy constructor" << endl;
}

Car& Car::operator=(const Car& cao){
    if (this != &cao){
        name = cao.name;
        speed = cao.speed;
    } // 'this' is a pointer to current object / '&cao' is the address of assigned object
    cout << "copy assignment operator" << endl;
    return *this;
    // reason for using *this : maintain conventional behavior
}

Car::~Car(){
    cout << "Destructor" << endl;
}

void Car::view() const{
    cout << "Car name : " << name << " Speed : " << speed << endl;
}
