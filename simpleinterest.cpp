#include<iostream>
using namespace std;

int main(){
    float p,t,r,si;
    cout<<"Enter the principle amount:--\n";
    cin>>p;
    cout<<"Enter the time:--\n";
    cin>>t;
    cout<<"Enter the rate of interest:--\n";
    cin>>r;
    si=p*t*r/100.0;
    cout<<"The Simple Interest is :-- \n"<<si;
    return 0;
}