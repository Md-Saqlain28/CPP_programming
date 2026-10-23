#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream ofs("C:/developer/PROGRAMMING/C++ Programing/my_file.txt");
    ofs<<"John"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;

    ofs.close();
}