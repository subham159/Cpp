#include<iostream>
#include<cmath>
using namespace std;
 int main(){
    float a,b,c,r1,r2;
    cout<<"Enter the value of a,b,c";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"First Root is \n"<<r1;
    cout<<"\n4Second Root is\n"<<r2;
    return 0;
 }