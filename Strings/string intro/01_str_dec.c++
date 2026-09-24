#include<iostream>
using namespace std;
int main()
{

    char S[10] ="Hello";      //[declaring with size]
    cout<<S<<endl;


    char S[] ="Hello";        //[declaring without size]
    cout<<S<<endl;


    char S[] = {'H','e','l','l','o','\0'};       //[declaring using single characters]
    cout<<S<<endl;


    char S[] = {65,66,67,68,0};                 //[declaring using asci codes]   {in the place of '\0' = 0 can be used}.
    cout<<S<<endl;


    char *S = "Hello";  //not prefered.
    string s = "Hello";   // using class string. 
    cout<<s<<endl;

}