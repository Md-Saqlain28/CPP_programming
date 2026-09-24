#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="How are you";

    cout<<str.find("are")<<endl;
    // cout<<str.find('o')<<endl;    single character can also be found.

    return 0;
}

int main()
{
    string str="How are you";

    cout<<str.rfind('a')<<endl;
    cout<<str.rfind('o')<<endl;   

    return 0;
}




