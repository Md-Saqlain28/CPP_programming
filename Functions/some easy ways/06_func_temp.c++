#include<iostream>
using namespace std;

template<class T>
T maxim(T a, T b)
{
    return a>b?a:b;
}

int main()
{
    cout<<maxim(10,15)<<endl;
    cout<<maxim(12.5f,8.5f)<<endl;
    return 0;
}