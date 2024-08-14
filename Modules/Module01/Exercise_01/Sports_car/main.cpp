#include <QCoreApplication>
#include "Car.h"
#include "Sportscar.h"

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
