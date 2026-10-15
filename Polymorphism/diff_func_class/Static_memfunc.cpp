#include<iostream>
using namespace std;

// class Innova{
//     public:
//         static int price;
//         static int getPrice(){
//             return price;
//         }
// };

// int Innova::price = 2000000;

// int main(){
//     Innova i1, i2, i3;
//     cout<<i1.price<<endl;
//     cout<<i3.price<<endl;

//     cout<<Innova::price<<endl;
// }


class Student{
    public:
        int roll;
        string name;
        static int addNo;

        Student(string n){
            addNo++;
            roll = addNo;
            name = n;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll No: "<<roll<<endl;
        }
};

int Student::addNo = 0;

int main(){
    Student s1("Ravi");
    Student s2("Ramesh");
    Student s3("Suresh");
    Student s4("Raj");
    Student s5("Syed");
    Student s6("Khan");

    s1.display();
    s6.display();

    cout<<"Number of Admitted Students: "<<Student::addNo<<endl;
}