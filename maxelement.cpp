#include<iostream>
using namespace std;

int main(){
    int a[100];
    int max,n,i;
    cout<<"Enter the no of element in the array:--\n";
    cin>>n;
    cout<<"Enter the elements in the array;--\n";
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for (i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    cout<<"The maximum element in array is--  "<<max;
    return 0;
    
}