#include<iostream>
using namespace std;

int search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (key==A[i])
            return i;
    return -1;
}

int main()
{
    int A[] = {2,4,6,8,10,12,14,16,18,20};
    int key;
    cout<<"Enter the key element\n";
    cin>>key;
    int index = search(A,10,key);
    cout<<"Element found at index "<<index<<endl;
}