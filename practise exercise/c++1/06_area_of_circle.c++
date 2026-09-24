#include <iostream>
using namespace std;

int main(){
    float r, area;
    cout << "Enter Radius";
    cin >> r;
    area = 22/7.0*r*r; // (float)22/7*r*r; // 3.14*r*r;// 3.1425f*r*r;
    cout << "Area is" << area << endl;

    return 0;

}