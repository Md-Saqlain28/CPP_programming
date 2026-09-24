#include<iostream>
using namespace std;

int sum(int a, int b, int c=0)
{
    return a+b+c;
}

int main()
{
    cout<<sum(2,8)<<endl;
    cout<<sum(3,9,5)<<endl;

    return 0;
}