#ifndef CARTHREAD_H
#define CARTHREAD_H

#include "Car.h"
#include "RaceTrack.h"

#include <QThread>

class CarThread : public QThread{
    Q_OBJECT

    Car *car;
    RaceTrack *raceTrack;

public:
    CarThread(Car *car, RaceTrack *raceTrack);

    void run();
};

#endif // CARTHREAD_H
