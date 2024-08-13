#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;

class Car{
    string name;
    double speed;
public:
    Car() : name("default"), speed(0.0) {
        cout << "Car name : " << name << " Speed : " << speed << endl;
    }
    Car(string n, double s) : name(n), speed(s) {
        cout << "Car name : " << name << " Speed : " << speed << endl;
    }

    Car(const Car &copy_car) : name(copy_car.name), speed(copy_car.speed){
        cout << "Car name : " << name << " Speed : " << speed << endl;
    }

    Car& operator=(const Car& cao){
        name = cao.name;
        speed = cao.speed;
        cout << "Car name : " << name << " Speed : " << speed << endl;
        return *this;
    }
    ~Car(){
        cout << "Destructor" << endl;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car car_a;
    Car car_b("test_car", 20.2);
    Car car_c = car_a;
    car_a = car_b;

//    return a.exec();
    return 0;
}
