#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

float sum(float a, float b)
{
   return a+b;
}

int sum(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    cout<<sum(10,15)<<endl;
    cout<<sum(10.5f,1.5f)<<endl;
    cout<<sum(16,14,10)<<endl;
    return 0;
}