#include<iostream>
using namespace std;

float fun(){
    return 2.34f;
}

int main(){
    double d = 12.3;
    int i = 9;
    auto x = 2*d+i; //Auto is used when we do not know the data type of the result.

    auto y = fun();
    cout<<x<<endl;
    cout<<y<<endl;
}