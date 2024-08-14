#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;

class Car{
    string make;
    string model;
    int year;
public:
    // default constructor
    Car() : make("Volkswagen"), model("Tiguan"), year(2020) {}
    Car(string m, string mo, int y) : make(m), model(mo), year(y) {}
    void drive(); // print output
};

class Sportscar : public Car{ // Car class inheritance
    double top_speed;
public :
    // default constructor
    Sportscar() : Car("Porsche", "911 Carrera", 2024), top_speed(210.0) {}
    // receive the properties of Car class and add the property 'top_speed'
    Sportscar(string m, string mo, int y, double top_s) : Car(m, mo, y), top_speed(top_s) {}
    void s_drive(); // print output (function redifinition)
};

void Car::drive(){
    cout << "Driving " << make << " " << model << " " << year << " edition." << endl;
}
void Sportscar::s_drive(){
    drive(); // call the drive func of parent class 'Car'
    cout << "Top Speed : " << top_speed << " km/h" << endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car car; // create object
    car.drive(); // function call

    Sportscar sportscar;
    sportscar.s_drive();

    Sportscar s_car("Lamborghini", "Huracan", 2024, 325.0);
    s_car.s_drive();

    return a.exec();
}
