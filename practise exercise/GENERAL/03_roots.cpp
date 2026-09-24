#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,d,r1,r2;
    cout<<"Enter the qoefficients"<<endl;
    cin>>a>>b>>c;
    d=(b*b-4*a*c);
    if(d==0){
        r1=-b/(2*a);
        cout<<"Roots are real and equal"<<r1;
    }
    else{
      if (d>0)
      {
        r1= (-b+sqrt(b*b-4*a*c))/(2*a);
        r2= (-b-sqrt(b*b-4*a*c))/(2*a);
        cout<<"Roots are real and unequal"<<r1<<" "<<r2;
      }
      else{
        cout<<"Roots are imaginary";
      }
      
    }
}