#include<iostream>
using namespace std;

int max(int a=0, int b=0, int c=0)
{
    return a>b && a>c ? a:(b>c?b:c);
}

int main()
{
    cout<<max()<<endl;
    cout<<max(2)<<endl;
    cout<<max(2,8)<<endl;
    cout<<max(3,9,5)<<endl;

    return 0;
}