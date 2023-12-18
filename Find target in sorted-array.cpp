#include<iostream>
using namespace std;


void findTarget(int arr[], int size, int target);

int main(){
    int arr[] = {2,4,6,7,8,9};
    int target, size;
    cout<<"Enter target element : ";
    cin>>target;
    
    size = sizeof(arr)/sizeof(arr[0]);
    findTarget(arr, size, target);
}

void findTarget(int arr[], int size, int target){
    int sum = 0;
    int i = 0, j = size-1;
    
    while(i<j){
        sum = arr[i]+arr[j];
        
        if(sum == target){
            cout<<"Elements exist at "<<i<<" and "<<j<<" index"<<endl;
            return;
        }else if(sum>target){
            j--;
        }else{
            i++;
        }
    }
    
    cout<<"Target element does not exist"<<endl;
}