# include<iostream>
using namespace std;
    
/*program for demo#2-base class pointer derived class object

*/
class rectangle
{
public:
	void area()
	{
		cout<<"area of rectangle"<<endl;
	}
};
class cuboid:public rectangle
{
public:
	void volume()
	{
		cout<<"cuboid volume"<<endl;
	}
};
int main()
{
	rectangle r;
	//cuboid *q=&r; // this will give error as derived class pointer cannot point to base class object

	cuboid c;
	c.area();
	c.volume();
    
    cuboid d;
    rectangle *p=&d;

	p->area();
	//p->volume();	 // this will give error as base class pointer cannot access derived class function	      
	return 0;
}