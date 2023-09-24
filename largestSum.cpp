#include<iostream>
using namespace std;

int findlargestsum(int arr[], int size){
    int ssum = 0,lsum =0;
    
    for(int i=0; i<size; i++){
        ssum = ssum+arr[i];
        
        if(arr[i]>ssum){
            ssum = arr[i];
        }
        
        if(ssum > lsum){
            lsum = ssum;
        }
    }
    
    return lsum;
}


int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = findlargestsum(arr, size);
    cout<<sum<<endl;
    return 0;
}