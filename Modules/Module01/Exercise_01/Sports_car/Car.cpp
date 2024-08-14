#include "Car.h"
#include <iostream>

Car::Car() : make("Volkswagen"), model("Tiguan"), year(2020) {}

Car::Car(string m, string mo, int y) : make(m), model(mo), year(y) {}

void Car::drive(){
    cout << "Driving " << make << " " << model << " " << year << " edition." << endl;
}
