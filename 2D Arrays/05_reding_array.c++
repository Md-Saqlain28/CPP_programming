#include<iostream>
using namespace std;
int main()
{
    int a[2][3];  //int a[2][3]={1,2,3,4,5,6};
    for (auto& x:a)
    {
        for (auto& y:x)
        {
            cin>>y;
        }
        cout<<endl;
    }
        for (auto& x:a)
    {
        for (auto& y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
}