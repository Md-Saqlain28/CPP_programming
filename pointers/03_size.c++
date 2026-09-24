#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size if the array";
    cin>>size;
    // int A[size];                //By this method we cannot change the size of the array if we want.
    // cout<<sizeof A<<endl;
    //  size = 20; we change !!!

    int *p=new int [size];

    delete []p;                    // If not mentioned lead to the memory leak!!!!
    cout<< "Enter new size";
    cin >>size;
    p=new int[size];
    return 0;

}

    // Easy to understand;

    // int main()
    // {
    //     int *p=new int[20];


    //     delete []p;
    //     p=new int[40];
    // }

    

