#include "RaceTrack.h"

RaceTrack::RaceTrack(int size, int finishLine) : size(size), finishLine(finishLine){}

int RaceTrack::accessSize() const{
    return size;
}

int RaceTrack::accessFinishline() const{
    return finishLine;
}

void RaceTrack::modify_size(int s){
    size = s;
}

void RaceTrack::modify_finishLine(int fl){
    finishLine = fl;
}

void RaceTrack::setFinishLine(int newFinishLine){
    finishLine = newFinishLine;
}
