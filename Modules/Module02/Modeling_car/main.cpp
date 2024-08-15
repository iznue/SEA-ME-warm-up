#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;

class Part{
public:
    virtual void print() = 0;
};

class Engine : public Part{
    string e_type;
public:
    Engine(string et) : e_type(et){}
    void print() override{
        cout << "Engine part : " << e_type << endl;
    }
};

class Wheel : public Part {
    int size;
public:
    Wheel(int s) : size(s){}
    void print() override {
        cout << "Wheel part : " << size << endl;
    }
};

class Brake : public Part {
    string b_type;
public:
    Brake(string bt) : b_type(bt){}
    void print() override {
        cout << "Brake part : " << b_type << endl;
    }
};

class Transmission : public Part {
    string t_type;
public:
    Transmission(string tt) : t_type(tt){}
    void print() override {
        cout << "Transmission part : " << t_type << endl;
    }
};

class Interior : public Part{
    string color;
public:
    Interior(string col) : color(col){}
    void print() override{
        cout << "Interior part : " << color << endl;
    }
};

class Car{
    string make;
    string model;
    double top_speed;
    Engine* engine_;
    Wheel* wheels_;
    Brake* brakes_;
    Transmission* transmission_;
    Interior* interior_;

public:
    // constructor
    Car() : make("Porsche"), model("Panamera GTS"), top_speed(302.0){
        engine_ = new Engine("V8 twin turbo");
        wheels_ = new Wheel[4] {Wheel(20), Wheel(20), Wheel(20), Wheel(20)};
        brakes_ = new Brake[4] {Brake("PCCB"), Brake("PCCB"), Brake("PCCB"), Brake("PCCB")};
        transmission_ = new Transmission("8 Automatic");
        interior_ = new Interior("Night Blue Metallic");
    }

    // print the details of car
    void printParts(){
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
    ~Car(){ // make, model, top_speed : no need to manually free memory
        delete engine_;
        delete [] wheels_;
        delete [] brakes_;
        delete transmission_;
        delete interior_;
        // dynamic memory allocation[using 'new'] need to free by using 'delete'
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car myCar;
    myCar.printParts();

    return a.exec();
}
