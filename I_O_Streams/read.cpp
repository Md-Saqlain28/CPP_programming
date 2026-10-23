#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream ifs;
    ifs.open("C:/developer/PROGRAMMING/C++ Programing/my_file.txt");

    //if(ifs)cout<<"File is opened"<<endl; //To check wheather the file is opened.
    if(ifs.is_open())cout<<"File is opened"<<endl;
    

    string name;
    int roll;
    string branch;

    ifs>>name>>roll>>branch;
    ifs.close();

    cout<<"Name "<<name<<endl;
    cout<<"Roll "<<roll<<endl;
    cout<<"Branch "<<branch<<endl;
}