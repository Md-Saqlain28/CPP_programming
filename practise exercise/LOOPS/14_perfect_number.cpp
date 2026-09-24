#include<iostream> // perfect number: if the sum of the factorials is double the number.
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout<<"Enter n";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        
        
    }
    if (2*n==sum)
    {
        cout<<"Perfect number!";
    }
    else{
        cout<<"not a perfect number";
    }
    
   return 0; 

    
}