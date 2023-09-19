#include <iostream>
using namespace std;

int BINARY_SEARCH(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        
    }
    return -1;
}


int main(void) {

int arr[5] = {20,25,32,54,98};
int result = BINARY_SEARCH(arr, 5, 54);

if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index ", result);
return 0;
}