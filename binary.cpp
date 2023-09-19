#include<iostream>
using namespace std;

int main(){
    int a[100];
    int key,start=0,mid,n,end;
    cout<<"Enter the no of elements:--\n";
    cin>>n;
    cout<<"Enter items in sorted order:--\n";
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    end=n-1;
    cout<<"Enter the key element :---\n";
    cin>>key;
    while(start<=end){
        mid=(start+end)/2;
        if(key==a[mid])
        {
            cout<<"Item found:--\n"<<mid;
            return 0;
        }
        else if (key<a[mid])
        {
            start=mid-1;
        }
        else{
            end=mid+1;
        }
        
    }
    cout<<"Item not found:--\n";
    return 0;
}