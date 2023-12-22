//Sort the array by 0,1,2
//Sort the array by 0,1,2
#include<iostream>
using namespace std;

void find(int arr[], int size){
    int l = 0;
    int m = 0;
    int r = size-1;
    
    for(int i=0; i<size; i++){
        if(arr[m] == 0){
            swap(arr[m], arr[l]);
            l++;
            m++;
        }else if(arr[m] == 1){
            m++;
        }else if(arr[m] == 2){
            swap(arr[m], arr[r]);
            r--;
        }
    }
}
int main(){
    int arr[] = {2,0,0,0,1,2,0,1,0,0,1,1,2,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    find(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

  return 0;
}
