#include<iostream>
using namespace std;

template<typename T>
void fun(T p){
    p();
}

int main(){
    //[](){cout<<"Hello"<<endl;}(); //Unnamed function.

    // [](int x, int y){cout << "Sum is " << x + y<<endl;}(10, 20);

    // cout<<([](int x, int y){return x + y;}(10, 20));

    // int a = [](int x, int y)->int{return x + y;}(10, 20);
    // cout<<a;

    int a = 10;
    //[a](){cout<<a<<endl;}();

    auto f = [&a](){cout<<a++<<endl;}; //We have to use reference to increment the variable. 
    fun(f);
    // a++; // we cannot increment this way!!.
    fun(f);
}