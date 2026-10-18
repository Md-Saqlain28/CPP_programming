#include<iostream>
using namespace std;

template <class T> // Template class for Stack
class Stack{
    private:
        T *stk;
        int top;
        int size;
    public:
        Stack(int sz){
            size = sz;
            stk = new T[size];
            top = -1;
        }
        void push(T x);
        T pop();
};

template <class T>
void Stack<T>::push(T x){
    if(top == size - 1){
            cout << "Stack Overflow" << endl;
        } else {
            stk[++top] = x;
        }
}

template <class T>
T Stack<T>::pop(){
    T x = 0;
    if(top == -1){
            cout << "Stack is empty" << endl;
        } else {
            x = stk[top--];
        }
    return x;
}

//Template classes can be used to create objects of different data types.
// In this example, we are creating a stack of integers. 
//The push and pop functions are defined to add and remove elements from the stack respectively. 
//The main function demonstrates the usage of the Stack class by creating a stack of integers and pushing two values onto it.


int main(){
    Stack<int> s(10);
    s.push(10);
    s.push(20);
}