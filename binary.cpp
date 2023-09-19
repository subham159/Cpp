#include<iostream>
using namespace std;

int main(){
    int a[10]={2,4,6,7,8,9,10,17,15},key,l=0,h=9,mid;
    cout<<"Enter the key element :---\n";
    cin>>key;
    while(l<=h){
        mid=(l+h)/2;
        if(key==a[mid])
        {
            cout<<"Item found:--\n"<<mid;
            return 0;
        }
        else if (key<a[mid])
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
    cout<<"Item not found:--\n";
    return 0;
}