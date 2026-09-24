#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello";
}

int main()
{
    void (*fp)();   //DECLARATION
    fp = display;   //INITIALIZATION
    (*fp)();        //CALLING
}