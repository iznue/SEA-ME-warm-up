#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class Sportscar : public Car{ // Car class inheritance
    double top_speed;
public :
    // default constructor
    Sportscar();
    // receive the properties of Car class and add the property 'top_speed'
    Sportscar(string m, string mo, int y, double top_s);
    void s_drive(); // print output (function redifinition)
};

#endif // SPORTSCAR_H
