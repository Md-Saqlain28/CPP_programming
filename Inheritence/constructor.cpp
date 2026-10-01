#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Non-param Base"<<endl;
        }
        Base(int x){
            cout<<"Param of Base "<< x<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout<<"Param of derived"<<endl;
        }
        Derived(int y){
            cout<<"Param of Derived "<< y<<endl;
        }
         Derived(int x, int y): Base(x){
            cout<<"Param of Derived "<< y<<endl;
        }
};

int main(){
    
    //Derived d;
    Derived d(10); //parameterized constructor of derived class will be called and default constructor of base class will be called
    Derived d2(20, 30); //parameterized constructor of derived class will be called and parameterized constructor of base class will be called

    return 0;
}