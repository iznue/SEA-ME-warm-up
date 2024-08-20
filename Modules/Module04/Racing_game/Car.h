#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QMutex>

class Car : public QObject{
    Q_OBJECT // declaration is required when using siganl & slot

public:
    int position;
    int speed;
    int direction;

    Car();
    Car(int position, int speed, int direction);

    int accessPosition() const;
    int accessSpeed() const;
    int accessDirection() const;

    void modify_position(int posi);
    void modify_speed(int sp);
    void modify_direction(int dir);

    void move();

signals:
    // signal function
    void positionChanged(int newPosition); // when signal occurs,
};

#endif // CAR_H
