#ifndef RACETRACK_H
#define RACETRACK_H

class RaceTrack{
public:
    int size;
    int finishLine;

    RaceTrack(int size, int finishLine);

    int accessSize() const;
    int accessFinishline() const;

    void modify_size(int s);
    void modify_finishLine(int fl);

    void setFinishLine(int newFinishLine);
};

#endif // RACETRACK_H
