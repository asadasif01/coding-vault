//- You have an array eg - [3,4,6,7,8,2,3,1] and you have a count n such as 4,
//  so shift first 4 elements of array to the left ( at the end of array)

#include<iostream>
using namespace std;

void shiftElements(int arr[], int size, int n);

int main(){
    int arr[] = {3,4,6,7,8,2,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int n;
    cout<<"Enter n which you want to shift : ";
    cin>>n;
    
    //call the shiftElements() funtion
    shiftElements(arr, size, n);
    
    //Print the array after shifting
    cout<<"Array after shifting is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

void shiftElements(int arr[], int size, int n){
    for(int i=0; i<n; i++){
        int temp = arr[0];
        for(int j=0; j<size-1; j++){
            arr[j] = arr[j+1];
        }
        
        arr[size-1] = temp;
    }    
}