#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]= "Hello";
    char s2[20]= "";
    strncpy(s2,s1,4);
    cout<<s2<<endl;
}