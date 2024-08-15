#ifndef PART_H
#define PART_H

#include <string>

using namespace std;

class Part{
public:
    virtual void print() = 0;
};

class Engine : public Part{
    string e_type;
public:
    Engine(string et);
    void print() override;
};

class Wheel : public Part {
    int size;
public:
    Wheel(int s);
    void print() override;
};

class Brake : public Part {
    string b_type;
public:
    Brake(string bt);
    void print() override;
};

class Transmission : public Part {
    string t_type;
public:
    Transmission(string tt);
    void print() override;
};

class Interior : public Part{
    string color;
public:
    Interior(string col);
    void print() override;
};


#endif // PART_H
