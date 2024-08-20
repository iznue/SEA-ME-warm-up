#include "CarThread.h"

#include <QMutex>
#include <QDebug>

static QMutex mutex;

CarThread::CarThread(Car *car, RaceTrack *raceTrack) : car(car), raceTrack(raceTrack) {}

// called when the thread starts
// synchronizing the threads
void CarThread::run(){
    qDebug() << "Car thread start";

    // loop to simulate the movement of car on the race track
    while (car->position < raceTrack->finishLine){
        qDebug() << "Call move()";
        mutex.lock(); // locking before moving the car

        car->move();

        mutex.unlock(); // Release lock after moving the car
        msleep(10); // timer to control the speed of car & update position
    }
}
