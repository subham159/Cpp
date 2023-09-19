#include<iostream>
using namespace std;

int main(){
    float u,v,a,distance;
    cout<<"Enter the intial velocity:--\n";
    cin>>u;
    cout<<"Enter the final velocity:---\n";
    cin>>v;
    cout<<"Enter the accelaration:---";
    cin>>a;
    distance=(v*v-u*u)/(2*a);
    cout<<"The distance is :---"<<distance;
    return 0;
}
