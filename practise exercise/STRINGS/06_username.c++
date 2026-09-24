#include<iostream>
#include<string>
using namespace std;

int main()
{
    string email = "john123@gamil.com";
    int i = (int) email.find('@');

    string uname = email.substr(0,i);

    cout<<"User name is "<<uname<<endl;

    return 0;
    


}