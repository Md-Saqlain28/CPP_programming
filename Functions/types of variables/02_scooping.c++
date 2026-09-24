#include<iostream>
using namespace std;

int x = 10;
int main()
{
    int x = 20;
    {
        int x = 30;
        cout<<x<<endl; 
    }
    cout<<x<<endl;
    cout<<::x<<endl;          //to access the global variable x *(::) === scoope resolution

    return 0;
}