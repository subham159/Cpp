#include<iostream>
using namespace std;

int main(){
    int a[7]={4,3,5,6,7,12,8};
    int n=7, sum=0;
    for(int i=0;i<7;i++)
        sum+=a[i];
    cout<<"The sum of all element in array is :---"<<sum;
    return 0;    
}