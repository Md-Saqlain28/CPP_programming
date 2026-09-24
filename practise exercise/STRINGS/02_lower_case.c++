#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "PROGRAMMING";

    for (int i = 0; str[i] !='\0'; i++)
    {
        str[i]=str[i]+32;
    }
    cout<<str<<endl;
    
}

int main()
{
    string str = "PROGRAmmING";

    for (int i = 0; str[i] !='\0'; i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    cout<<str<<endl;
    
}

