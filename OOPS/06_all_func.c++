#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle();                                                    //default and non parameterized constructor
    Rectangle(int l, int b);       //constructors                   // parameterized constructor
    Rectangle(Rectangle &r);                                        // copy constructor
    void setLength(int l);         // Mutators
    void setBreadth(int b);
    int getLength(){return length;}              // Accessors
    int getBreadth(){ return breadth;}
    int area();                   // Facilitators
    int perimeter();
    bool isSquare();              // Inspectors(Enquiry functions)
    ~Rectangle();                 // Destructor 
};

int main()
{
    Rectangle r1(10,10);
    cout<<"Area is "<<r1.area()<<endl;
    if (r1.isSquare())
        cout<<"Yes "<<endl;   
}


Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l)
{
    length = 1;
}
void Rectangle::setBreadth(int b)
{
    breadth = 1;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle destroyed!";
}


