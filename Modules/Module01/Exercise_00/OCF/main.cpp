#include <QCoreApplication>
#include "Car.h"

/*
class Car{
    string name;
    double speed;
public:
    // default constructor
    Car() : name("default"), speed(0.0) {
        cout << "Car name : " << name << " Speed : " << speed << endl;
    }

    // constructor with parameter
    Car(string n, double s) : name(n), speed(s) {
        cout << "Car name : " << name << " Speed : " << speed << endl;
    }

    // copy constructor
    Car(const Car &copy_car) : name(copy_car.name), speed(copy_car.speed){
        cout << "Car name : " << name << " Speed : " << speed << endl;
    }

    // copy assignment operator
    Car& operator=(const Car& cao){
        name = cao.name;
        speed = cao.speed;
        cout << "Car name : " << name << " Speed : " << speed << endl;
        return *this;
        // reason for using *this : maintain conventional behavior
    }

    // destructor
    ~Car(){
        cout << "Destructor" << endl;
    }
};
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car car_a; // default constructor
    car_a.view();

    Car car_b("test_car", 20.2); // constructor with parameter
    car_b.view();

    Car car_c = car_a; // copy constructor
    car_c.view();

    car_a = car_b; // copy assignment operator
    car_a.view();

//    return a.exec();
    return 0;
}
