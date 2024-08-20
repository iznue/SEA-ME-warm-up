#include "Car.h"

#include <QDebug>

Car::Car(){}
Car::Car(int position, int speed, int direction) : position(position), speed(speed), direction(direction){}

int Car::accessPosition() const{
    return position;
}

int Car::accessSpeed() const{
    return speed;
}

int Car::accessDirection() const{
    return direction;
}

void Car::modify_position(int posi){
    position = posi;
}

void Car::modify_speed(int sp){
    speed = sp;
}

void Car::modify_direction(int dir){
    direction = dir;
}

void Car::move(){
    position += speed * direction;
    qDebug() << "Car position : " << position;
    emit positionChanged(position); // active signal
}
