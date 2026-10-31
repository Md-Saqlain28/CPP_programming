#include<iostream>
using namespace std;

class Parent //final //If i use final keyword here it will restrict inheritence.
{
    virtual void show() final{

    }

};

class Child:Parent
{

    // void show(){
    //     //the final functions of parent class cannot be overridden in the child class.
    // }

};



