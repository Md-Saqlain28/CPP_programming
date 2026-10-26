#include<iostream>
#include<set> //only unique values
using namespace std;

int main(){
    set<int> v = {2, 4, 6, 8, 10, 10};
    v.insert(20);
    v.insert(30);


    // Displaying the elements of the set using iterator
   set<int>::iterator itr;
   for (itr = v.begin(); itr != v.end(); itr++){
        cout<<*itr<<endl; //data cannot be modified
   }

    // Displaying the elements of the set using for each loop
    cout<<"Using for each loop"<<endl;
    for(int x:v)  
        cout<<x<<endl;

    
}