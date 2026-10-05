#include<iostream>
using namespace std;

class Base{

    public:
         void fun1(){
            cout<< "Fun1 of base"<<endl;
         }
};


class Derived: public Base{
    public:
        void fun2(){
            cout<< "Fun2 of derived"<<endl;
        }
};

int main(){
    Derived d;
    Base *ptr = &d; // pointer of base class pointing to derived class object
    ptr->fun1(); // calling base class function using base class pointer
    // ptr->fun2(); // this will give error as base class pointer cannot access derived class function
    return 0;
}