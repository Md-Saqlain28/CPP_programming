#include<iostream>
using namespace std;
int main()
{
    char s[20];
    cout<<"Enter your name\n";
    cin>>s;
    cout<<"Welcome "<<s<<endl;
    return 0;
}

int main()
{
    char s[20];
    cout<<"Enter your name\n";
    cin.get(s,20);                   //cin.getline(s,20);
    cout<<"Welcome "<<s<<endl;
    return 0;
}