#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]= "Hello";
    char s2[20]= "World";
    strncat(s1,s2,3);
    cout<<s1<<endl;
    return 0;
}