#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {2, 4, 6, 8, 10};
    v.push_back(20);
    v.push_back(30);

    v.pop_back();

    // Displaying the elements of the vector using iterator
   vector<int>::iterator itr;
   for (itr = v.begin(); itr != v.end(); itr++){
        cout<<++*itr<<endl;
   }

    // Displaying the elements of the vector using for each loop
    for(int x:v)  
        cout<<x<<endl;

    
}