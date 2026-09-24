#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "Hello ";
    str.insert(3,"ll");    
    //str.insert(3,"hello",3);             //for passing required number of characters.
    cout<<str<<endl;

    return 0;
}    