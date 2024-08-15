#include <QCoreApplication>
#include "Car.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car myCar;
    myCar.printParts();

    return a.exec();
}
