#include <iostream>
using namespace std;

class Parent{
    private: int a;
    protected: int b;
    public: int c;

    void funParent(){
        a = 10;
        b = 5;
        c = 15;
    }
};

class Child : public Parent{ 
    /* When we inherit a class publically, then only the public element is accessible in the child class object. 
    The private and protected elements are not accessible in the child class.*/
    
    /* When we inherit a class protectedly, then the object of the derived class cannot access the public and protected elements of the base class. 
    The private elements are not accessible in the derived class.*/

    public: void funChild(){
        // a = 10; // Not accessible because 'a' is private in Parent
        b = 20; // Accessible because 'b' is protected in Parent
        c = 30; // Accessible because 'c' is public in Parent
    }
};

class GrandChild : public Child{
    // grandchild class cannot accees any members if the child class is derived privately from the parent class.
    //The grandchild class can access the members of the child class if the child class is derived publicly or protectedly from the parent class.
    public: void funGrandChild(){
        // a = 10; // Not accessible because 'a' is private in Parent
        b = 25; // Accessible because 'b' is protected in Parent
        c = 35; // Accessible because 'c' is public in Parent
    }
};

int main(){
    Child c;
    // c.a = 10; // Not accessible because 'a' is private in Parent
    // c.b = 20; // Not accessible because 'b' is protected in Parent  
    c.c = 30; // Accessible because 'c' is public in Parent
}