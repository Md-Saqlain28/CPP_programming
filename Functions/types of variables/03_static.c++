#include<iostream>
using namespace std;

void func ()
{
    static int a = 10;      // similar to local variables (present always in the memory) but is not accessible by every func only accessible by the func in which it is declared//
    int b = 20;
    a++;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    func();
    func();
    func();
}