#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string str1 = "Hello";
    string str2 = " World";

    str1 = str1+str2;     //concatenation
    cout<<str1<<endl;

    return 0;
}


int main ()
{
    string str1 = "Hello";
    string str2 = " World";

    str1 = str2;     //swaping / replacing
    cout<<str1<<endl;
    cout<<str2<<endl;

    return 0;
}