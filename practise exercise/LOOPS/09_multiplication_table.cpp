#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter n";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        cout<<n<<" x "<<i<<" = "<<i*n;
        cout<<endl;
    }
    return 0;
}