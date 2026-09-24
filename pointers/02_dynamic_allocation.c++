#include<iostream>
using namespace std;

int main()
{
    int *p=new int [5];
    p[0] = 10;
    p[1] = 15;
    cout<<p[1]<<endl;


    delete []p;

    p = nullptr;

    return 0;
}
