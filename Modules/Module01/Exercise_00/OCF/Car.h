#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car{
    string name;
    double speed;
public:
    Car(); // default constructor
    Car(string n, double s); // constructor with parameter
    Car(const Car &copy_car); // copy constructor
    Car& operator=(const Car& cao); // cao = copy assignment operator
    ~Car(); // destructor
    void view() const; // print result [name, speed]
};

#endif // CAR_H
