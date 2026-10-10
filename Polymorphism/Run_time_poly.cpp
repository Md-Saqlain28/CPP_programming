#include<iostream>
using namespace std;

class Car{
    public:
    virtual void start(){
            cout<<"Car is starting"<<endl;
        }

};

class Innova: public Car{
    public:
    void start(){
            cout<<"Innova is starting"<<endl;
        }

};

class Maruti: public Car{
    public:
    void start(){
            cout<<"Maruti is starting"<<endl;
        }

};

int main(){
    Car *c;
    Innova i;
    Maruti m;

    c=&i;
    c->start();

    c=&m;
    c->start();
}