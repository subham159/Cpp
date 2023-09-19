#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n,i,key;
    cout<<"Enter the no of element in the array:--\n";
    cin>>n;
    cout<<"Enter the elements in the array;--\n";
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Key Value:---";
    cin>>key;

    for (i=1;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"Entered item found :----  "<<i;
            return 0;
        }
    }
    cout<<"Entered item not found";
    return 0;
    
}