#include<iostream>
using namespace std;

int g = 5;

void func()
{
    int a = 10;
    a++;
    g++;
    cout<<a<<" "<<g<<endl;
}

int main()
{
    cout<<g<<endl;
    func();
    cout<<g;
}