#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Non-param Base"<<endl;
        }
        Base(int x){
            cout<<"Param of Base"<<x<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout<<"Param of derived"<<endl;
        }
        Derived(int y){
            cout<<"Param of Derived"<<y<<endl;
        }
};

int main(){
    Derived d;
    
}
