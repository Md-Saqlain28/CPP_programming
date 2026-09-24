#include <iostream>
using namespace std;

int main()
{
    int v, u, a;
    float speed;

    cout << "Enter 3 numbers";
    cin >> v >> u >> a;

    speed = float (v*v-u*u)/(2*a);

    cout << "Speed is " << speed << endl;

    return 0;
}