//FRIEND FUNCTION = A FRIEND FUNCTION IS A FUNCTION THAT IS NOT A MEMBER OF A CLASS BUT HAS ACCESS TO ITS PRIVATE AND PROTECTED MEMBERS. IT IS DECLARED USING THE FRIEND KEYWORD.

# include<iostream>
using namespace std;
    
/*program for friend function

*/
class test
{
private:
	int a;
protected:
	int b;
public:
	int c;
	friend void fun();
};
void fun()
{
	test t;
	t.a=10;
	t.b=15;
	t.c=9;
}


//FREIEND CLASS = A FRIEND CLASS IS A CLASS THAT CAN ACCESS PRIVATE AND PROTECTED MEMBERS OF ANOTHER CLASS. IT IS DECLARED USING THE FRIEND KEYWORD.
# include<iostream>
using namespace std;
    
/*program for friend class

*/
class your;
class my
{
private:
	int a;
protected:
	int b;
public:
	int c;
	friend your;
};
class your
{
public:
	my m;
	void fun()
	{
	     m.a=10;
	     m.b=10;
	     m.c=10;
	}
};