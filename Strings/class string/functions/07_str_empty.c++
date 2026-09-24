#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "";

    if (str.empty())
    {
        cout<<"String is empty!";
    }
    else
    {
        cout<<"String is "<<str;
    }

    return 0;
}