#include<iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    int mathmarks;
    int phymarks;
    int chemmarks;
public:
    student(int r, string n, int m, int p, int c)
    {
        roll = r;
        name = n;
        mathmarks = m;
        phymarks = p;
        chemmarks = c;
    }
    int total()
    {
        return mathmarks+phymarks+chemmarks;
    }
    char Grade()
    {
        float average = total()/3;
        if (average>70)
            return 'A';
        else if (average>=40 && average<70)
            return 'B';
        else
            return 'C';
    }
};
int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter the roll number of a student"<<endl;
    cin>>roll;
    cout<<"Enter the name "<<endl;
    cin>>name;
    cout<<"Enter the marks in 3 subjects"<<endl;
    cin>>m>>p>>c;
    student s(roll, name, m, p, c);
    cout<<"Total marks obtained :"<<s.total()<<endl;
    cout<<"Grade of student :"<<s.Grade()<<endl;
}
