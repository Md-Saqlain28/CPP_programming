# include<iostream>
#include <memory>
using namespace std;
    
/*program for using unique pointer

*/
class rectangle
{
	int length;
    int breadth;
public:
	rectangle(int l, int b)
	{
		length=l;
	    breadth=b;
	}
    int area()
	{
		return length*breadth;
	}
};
int main()
{
	unique_ptr<rectangle> ptr(new rectangle(10, 5)); 
	
	// unique_ptr<rectangle> ptr2 = ptr; // we cannot initialize another pointer.

	unique_ptr<rectangle> ptr2;
	ptr2 = move(ptr); // this can be done; moving ptr to ptr2 by deleting ptr.
	cout<< ptr2->area()<<endl;
	// cout<<ptr->area()<<endl; 

}