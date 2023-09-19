#include<iostream>
using namespace std;

enum dept {cs,ece,it,civil};
int main(){
    dept d,e,f;
    d=cs;
    e=ece;
    f=civil;
    cout<<"This are enum:--"<<d<<e<<f;
    return 0;
}