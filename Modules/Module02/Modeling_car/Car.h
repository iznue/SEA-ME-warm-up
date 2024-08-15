#ifndef CAR_H
#define CAR_H

#include "Part.h"

class Car{
    string make;
    string model;
    double top_speed;
    Engine* engine_;
    Wheel* wheels_;
    Brake* brakes_;
    Transmission* transmission_;
    Interior* interior_;

public:
    // constructor
    Car();

    // print the details of car
    void printParts();

    // destructor
    ~Car();
};

#endif // CAR_H
