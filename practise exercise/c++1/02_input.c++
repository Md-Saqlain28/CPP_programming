#include <iostream>
using namespace std;

int main ()
{
    string name;

    cout << "May I know your name?";
    getline(cin, name); // getline is used to read entire line

    cout << "Welcome\t" << name;
}
