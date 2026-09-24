#include <iostream>
using namespace std;
int main()
{
    int A[5]={3,4,2,6,7};
    for (int i = 0; i < 5; i++)
    {
        cout<<A[i]<<endl;
    }   
}


#include <iostream>
using namespace std;
int main()
{
    int A[5]={3,4,2,6,7};
    for (int x:A)
    {
        cout<<x<<endl;
    }   
}

#include <iostream>
using namespace std;
int main()
{
    float A[6]={3.2f,4.5f,2.0f,6,7,8};
    for (float x:A)
    {
        cout<<x<<endl;
    }   
}


#include <iostream>
using namespace std;
int main()
{
    float A[6]={3.2f,4.5f,2.0f,6,7,8};
    for (auto x:A)
    {
        cout<<x<<endl;
    }   
}

#include <iostream>
using namespace std;
int main()
{
    char A[6]={'f','g','c',66};
    for (auto x:A)
    {
        cout<<x<<endl;
    }   
}