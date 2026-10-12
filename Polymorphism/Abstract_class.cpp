# include<iostream>
using namespace std;
    
/*program for abstract class
*/
class car
{
public:
	virtual void start()=0; // pure virtual function
};
class innova:public car
{
public:
	void start()
	{
		cout<<"innova started"<<endl;
	}
};
class swift:public car
{
public:
	void start()
        {
		cout<<"swift started"<<endl;
	}
};
int main()
{
	// car c; // error: cannot declare variable 'c' to be of abstract type 'car'
	car *p = new innova();
	p->start();
	p=new swift();
	p->start();
}



// using base and derived class 
using namespace std;
class Base
{
    public:
        virtual void fun1()=0; // pure virtual function
        virtual void fun2()=0;
};

class Derived :public Base
{
    public:void fun1(){
        cout<<"fun1 of Derived"<<endl;
    } 

    void fun2(){
        cout<<"fun2 of Derived"<<endl;
    }
};


int main()
{
   Derived d;
    d.fun1();
    d.fun2();

}