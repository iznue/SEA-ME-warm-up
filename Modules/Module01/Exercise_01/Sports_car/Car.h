#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car{
    string make;
    string model;
    int year;
public:
    // default constructor
    Car();
    Car(string m, string mo, int y);
//    Car() : make("Volkswagen"), model("Tiguan"), year(2020) {}
//    Car(string m, string mo, int y) : make(m), model(mo), year(y) {}
    void drive(); // print output
};

#endif // CAR_H
