#include<iostream>
#include<forward_list> //Singly linked list
using namespace std;

int main(){
    forward_list<int> v = {2, 4, 6, 8, 10};
    v.push_front(20);
    v.push_front(30);


    // Displaying the elements of the forward_list using iterator
   forward_list<int>::iterator itr;
   for (itr = v.begin(); itr != v.end(); itr++){
        cout<<++*itr<<endl;
   }

    // Displaying the elements of the forward_list using for each loop
    for(int x:v)  
        cout<<x<<endl;

    
}