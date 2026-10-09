#include<iostream>
using namespace std;

class BasicCar{
    public:
        virtual void display(){              //Used to make the function virtual so that it can be overridden in the derived class.
            cout<<"BasicCar Started"<<endl;
        }
};

class AdvancedCar: public BasicCar{

    public:
        void display(){
            cout<<"AdvancedCar Started"<<endl;
        }
};

int main(){
    AdvancedCar d;
    BasicCar *p = &d;

    p->display();
}