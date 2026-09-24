#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str  = "welcome";
    string::iterator it;

    for (it=str.begin();it != str.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;

    return 0;
    
}

// int main()
// {
//     string str  = "welcome";
//     string::iterator it;

//     for (it=str.begin();it != str.end();it++)
//     {
//         *it=*it - 32;                     // cahnging to upper cas letters.
//     }
//     cout<<str<<endl;

//     return 0;
    
// }


