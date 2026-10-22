# include<iostream>
using namespace std;

//How destructors work in inheritence

class Base{
    public:
        Base(){
            cout<<"Constructor of Base"<<endl;
        }

        ~Base(){
            cout<<"Destructor of Base"<<endl;
        }
};

class Derived : public Base{
    public:
        Derived(){
            cout<<"Constructor of Derived"<<endl;
        }

        ~Derived(){
            cout<<"Destructor of Derived"<<endl;
        }
};

void fun(){
    Derived d;
}

int main(){
    fun();
}

    
/*program for  virtual destructor
class base
{
public:
	virtual ~base() //if we do not add the virtual key word then only the base class destructor will be called.
	{
		cout<<"destructor of base"<<endl;
	}
};
class derived:public base
{
public:
	~derived()
	{
		cout<<"destructor of derived"<<endl;
	}
};
void fun()
{
	base *p=new derived();
	delete p;
}
int main()
{
	fun();
}
*/