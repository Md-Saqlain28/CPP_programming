#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "PROGRAMMING";

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout<<"Length is "<<count<<endl;

    return 0;
    
}

int main()
{
    string str = "PROGRAMMING";
    string::iterator it;

    int count = 0;

    for (it = str.begin(); it !=str.end(); it++)
    {
        count++;
    }
    cout<<"Length is "<<count<<endl;

    return 0;
    
}