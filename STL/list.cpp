#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> v = {2, 4, 6, 8, 10};
    v.push_back(20);
    v.push_back(30);

    v.pop_back();

    // Displaying the elements of the list using iterator
   list<int>::iterator itr;
   for (itr = v.begin(); itr != v.end(); itr++){
        cout<<++*itr<<endl;
   }

    // Displaying the elements of the list using for each loop
    for(int x:v)  
        cout<<x<<endl;

    
}