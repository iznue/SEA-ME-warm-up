#include "Part.h"
#include <iostream>

Engine::Engine(string et) : e_type(et){}

void Engine::print(){
    cout << "Engine part : " << e_type << endl;
}

Wheel::Wheel(int s) : size(s){}

void Wheel::print(){
    cout << "Wheel part : " << size << endl;
}

Brake::Brake(string bt) : b_type(bt){}

void Brake::print(){
    cout << "Brake part : " << b_type << endl;
}

Transmission::Transmission(string tt) : t_type(tt){}

void Transmission::print(){
    cout << "Transmission part : " << t_type << endl;
}

Interior::Interior(string col) : color(col){}

void Interior::print(){
    cout << "Interior part : " << color << endl;
}
