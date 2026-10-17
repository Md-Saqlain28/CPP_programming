#include<iostream>
using namespace std;


class MyException: exception{

};

int division(int a, int b) throw(){
    if(b == 0){
        throw MyException();
    }
    return a / b;
}

int main(){
    int x = 10, y = 0, z;
    try{
        z = division(x, y);
        cout << z << endl;
    }
    catch(MyException e){
        cerr << "Division by zero! "<< endl;
    }

    cout<< "Bye!" << endl;
}