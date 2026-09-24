#include<iostream>
using namespace std;
int main()
{
    int A[7]={4,3,5,2,6,7,1};
    int n=7;
    int max= 4;
    for (int i = 1; i < n; i++)
    {
        if (A[i]>max)
        {
            max=A[i];
        }
        
    }
    cout<<"Max is "<<max;
    
}