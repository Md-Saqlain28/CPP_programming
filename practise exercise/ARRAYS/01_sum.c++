#include<iostream>
using namespace std;
int main()
{
    int A[7]={4,3,5,2,6,7,1};
    int n=7,sum=0;
    for (int i = 0; i < n; i++)    // for(auto x:A)
    {                              // { sum=sum+x}
        sum=sum+A[i]; 
    }
    cout<<"sum is "<<sum;
}