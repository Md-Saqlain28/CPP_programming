#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]= "Programming";
    char s2[20]= "gram";
    cout<<strstr(s1,s2)<<endl;  
   
    return 0;
}

int main()
{
    char s1[20]= "Programming";
    char s2[20]= "king";
    if(strstr(s1,s2) !=NULL)
    {
    cout<<strstr(s1,s2)<<endl;  
    }
    else
    {
    cout<<"Not found"<<endl;
    }
    return 0;
}