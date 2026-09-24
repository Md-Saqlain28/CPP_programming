#include<iostream>
using namespace std;
int main()
{
    int a[10]={2,4,6,8,12,-3,5,7,9,11};
    int key;
    cout<<"Enter a key to search\n";
    cin>>key;
    for (int i = 0; i < 10; i++)
    {
        if (key==a[i])
        {
            cout<<"Element found at "<<i;
            exit(0);
        }
        
    }
    cout<<"Key Element not found!"<<endl;
    return 0;
}