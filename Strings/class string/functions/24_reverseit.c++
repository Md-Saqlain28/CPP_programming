#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str  = "welcome";
    string::reverse_iterator it;

    for (it=str.rbegin();it != str.rend();it++)
    {
        cout<<*it;
    }
    cout<<endl;

    return 0;
    
}