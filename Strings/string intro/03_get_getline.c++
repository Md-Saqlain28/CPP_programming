#include<iostream>
using namespace std;
// int main()
// {
//     char s[20];
//     char s1[20];
//     cout<<"Enter your name\n";
//     cin.get(s,20);
//     cout<<"Welcome "<<s<<endl;
//     cin.ignore();
//     cout<<"Enter your name again\n";
//     cin.get(s1,20);
//     cout<<"Welcome "<<s1<<endl;
//     return 0;
// }

int main()
{
    char s[20];
    char s1[20];
    cout<<"Enter your name\n";
    cin.getline(s,20);
    cout<<"Welcome "<<s<<endl;

    cout<<"Enter your name again\n";
    cin.getline(s1,20);
    cout<<"Welcome "<<s1<<endl;
    return 0;
}
