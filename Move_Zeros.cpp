//Given an integer array nums, move all 0's to the end of
//it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

#include<iostream>
using namespace std;

void moveZeros(int arr[], int size);

int main(){
    int arr[] = {0,5,7,8,0,2,0,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    moveZeros(arr,size);
    
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void moveZeros(int arr[], int size){
    int l = 0, r = 7;
    while(l < r){
        if(arr[l] == 0 && arr[r] != 0){
            swap(arr[l], arr[r]);
            l++;
            r--;
        }else if(arr[r] == 0){
            r--;
        }else if(arr[l] != 0){
            l++;
        }
    }
}
