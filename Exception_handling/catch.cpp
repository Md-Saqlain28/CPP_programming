#include<iostream>
using namespace std;

//MUltiple catch blocks, each for different type of exception.

class MyException1{
    
};
class MyException2: MyException1{
    // While using multiple catch blocks, the order of catch blocks is important. 
    //The catch block for base class should be after the catch block for derived class. Otherwise, the catch block for base class will catch the exception and the catch block for derived class will never be executed.
};

int main(){
    
    try{
       throw "Hello"; 
    }
    catch(int e){ //int catch block
        cout << "Int catch " << e << endl;
    }
    catch(double e){//double catch block
        cout << "Double catch " << e << endl;
    }
    catch(...){//catch all block
        cout << "Catch all block" << endl;
    }

    cout<< "Bye!" << endl;
}