#include<iostream>
#include<fstream>

using namespace std;

//Serialization is a process of storing and retreiving the state of an object.

class Student{
    public:
        string name;
        int roll;
        string branch;
        friend ofstream & operator<<(ofstream &ofs, Student &s);
        friend ifstream & operator>>(ifstream &ifs, Student &s);
};

ofstream & operator<<(ofstream &ofs, Student &s){// Writing into a file
    ofs <<s.name<<endl;
    ofs <<s.roll<<endl;
    ofs <<s.branch<<endl; 
    return ofs;
}

ifstream & operator>>(ifstream &ifs, Student &s){ // Reading the data from a file
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}

int main(){
    Student s1;

    ifstream ifs("C:/developer/PROGRAMMING/C++ Programing/Student.txt");
    ifs>>s1;

    cout<<"Name "<<s1.name<<endl;
    cout<<"ROll "<<s1.roll<<endl;
    cout<<"Branch "<<s1.branch<<endl;

    ifs.close();

}

