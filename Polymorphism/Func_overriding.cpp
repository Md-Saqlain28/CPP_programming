#include<iostream>
using namespace std;

class Base{
    public:
        void display(){
            cout<<"Base class display function"<<endl;
        }
};

class Derived: public Base{

    public:
        void display(int x){
            cout<<"Derived class display function"<<endl;
        }
};

int main(){
    Derived d;
    //d.Base::display(); // calling base class display function
    d.display(5); // calling derived class display function
}