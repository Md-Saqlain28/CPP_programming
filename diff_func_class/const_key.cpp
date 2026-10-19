#include<iostream>
using namespace std;

int main(){
    /*
    (1) INT CONST
    const int x = 10;
    x = 20;  Variable 'x' is declared as const, so it cannot be modified after initialization. This line will cause a compilation error.
    */

    /*
    (2)POINTER TO A CONST INT
    This is allowed since 'x' is not declared as const.
     int x = 10;
     int *ptr = &x;   Pointer to an integer variable 'x'
     *ptr = 20;   Modifying the value of 'x' through the pointer. This is allowed since 'x' is not declared as const.
     cout << *ptr << x << endl;   Output: 20 20

    When 'x' is declared as const, the following code will cause a compilation error:
    const int x = 10;
    int *ptr = &x; This line will cause a compilation error because you cannot assign the address of a const variable to a non-const pointer. 
    The pointer 'ptr' is not allowed to modify the value of 'x', which is declared as const.
    const int *ptr = &x;  This is allowed because 'ptr' is a pointer to a const int, meaning it cannot modify the value of 'x'.
    ++*ptr;  This line will cause a compilation error because 'ptr' is a pointer to a const int, and you cannot modify the value of a const variable through a pointer.
    */

    /*
    (3) POINTER TO A CONST INT
    int x = 10;
    const int *ptr = &x;  Pointer to a const int, meaning the value pointed to cannot be modified through this pointer.
    int y = 20;
    ptr = &y;   This is allowed because we are changing the pointer to point to a different variable, not modifying the value of the variable itself.
    ++*ptr;  This line will cause a compilation error because 'ptr' is a pointer to a const int, and you cannot modify the value of a const variable through a pointer.
    */

    /*  
    (4) CONSTANT POINTER
    int x = 10;
    int * const ptr = &x;  Pointer to an integer variable 'x'
    int y = 20;
    ptr = &y;   This line will cause a compilation error because 'ptr' is a constant pointer, meaning it cannot point to a different variable after initialization. The address stored in 'ptr' cannot be changed.
    */

    /*  
    (5) POINTER TO A CONST INT AND CONSTANT POINTER
    int x =10;
    const int * const ptr = &x;  Pointer to a const int, meaning the value pointed to cannot be modified through this pointer, and the pointer itself cannot point to a different variable after initialization.
    ++*ptr;  This line will cause a compilation error because 'ptr' is a pointer to a const int, and you cannot modify the value of a const variable through a pointer.
    int y = 20;
    ptr = &y;   This line will cause a compilation error because 'ptr' is a constant pointer, meaning it cannot point to a different variable after initialization. The address stored in 'ptr' cannot be changed.
    */

    //6
    // Demo d;
    // d.display();


    //7
    // int x = 10;
    // int y = 20;
    // fun(x, y);
    // cout << x << " " << y << endl;  

}

//6
/*const member function
class Demo{
    public:
        int x = 10;
        int y = 20;

        void display() const
        {
            // x++; // This line will cause a compilation error because the display() function is declared as const, meaning it cannot modify any member variables of the class. 
            //The 'x' variable is being modified here, which is not allowed in a const member function.
            cout<<x<<""<<y<<endl;
        }
};
*/

//7 Const reference
// void fun(int &a, const int &b){
//     cout << a << " " << b << endl;  
//     a++;  // This is allowed since 'a' is a non-const reference and can be modified.
//     // b++;  This line will cause a compilation error because 'b' is a const reference and cannot be modified.
// }

