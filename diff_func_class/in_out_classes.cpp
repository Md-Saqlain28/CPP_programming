#include<iostream>
using namespace std;

class Outer{ //outer class can access inner class members
    public:
        void fun(){
            i.display();
        }

    class Inner{
        public:
            void display(){
                cout<<"Inner class function"<<endl;
            }
    };
    Inner i; //object of inner class created in outer class
};

int main(){
    Outer::Inner i;
}