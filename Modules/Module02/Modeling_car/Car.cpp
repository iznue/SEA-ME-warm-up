#include "Car.h"
#include <iostream>

// constructor
Car::Car() : make("Porsche"), model("Panamera GTS"), top_speed(302.0){
    engine_ = new Engine("V8 twin turbo");
    wheels_ = new Wheel[4] {Wheel(20), Wheel(20), Wheel(20), Wheel(20)};
    brakes_ = new Brake[4] {Brake("PCCB"), Brake("PCCB"), Brake("PCCB"), Brake("PCCB")};
    transmission_ = new Transmission("8 Automatic");
    interior_ = new Interior("Night Blue Metallic");
}

// print the details of car
void Car::printParts(){
    cout << "Car Details\n";
    cout << make << model << endl;
    cout << "Top speed : " << top_speed << " km/h\n";
    engine_->print();
    for (int i=0; i<4; i++){
        wheels_[i].print();
        brakes_[i].print();
    }
    transmission_->print();
    interior_->print();
}

// destructor
Car::~Car(){ // make, model, top_speed : no need to manually free memory
    delete engine_;
    delete [] wheels_;
    delete [] brakes_;
    delete transmission_;
    delete interior_;
    // dynamic memory allocation[using 'new'] need to free by using 'delete'
}
