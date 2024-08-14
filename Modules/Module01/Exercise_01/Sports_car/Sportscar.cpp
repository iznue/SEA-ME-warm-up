#include "Sportscar.h"
#include <iostream>

Sportscar::Sportscar() : Car("Porsche", "911 Carrera", 2024), top_speed(210.0) {}

Sportscar::Sportscar(string m, string mo, int y, double top_s) : Car(m, mo, y), top_speed(top_s) {}

void Sportscar::s_drive(){
    drive(); // call the drive func of parent class 'Car'
    cout << "Top Speed : " << top_speed << " km/h" << endl;
}
