#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="Welcome";
    char str[10];

    s.copy(str,s.length());
    str[7]= ('\0');
    cout<<str<<endl;

    return 0;
}