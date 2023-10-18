//Given an integer array nums, move all 0's to the end of
//it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

#include<iostream>
using namespace std;

void moveZeros(int arr[], int size){
    int nonZeroIndex = 0;
    
    for(int i=0; i<size; i++){
        if(arr[i] != 0){
            arr[nonZeroIndex] = arr[i];
            if(i != nonZeroIndex){
                arr[i] = 0;
            }
            nonZeroIndex++;
        }
    }    
}

int main(){
    int arr[] = {0,1,0,3,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    moveZeros(arr, size);
    
    cout<<"Result is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}