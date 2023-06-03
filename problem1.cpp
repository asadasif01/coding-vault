#include<iostream>
using namespace std;

void find(int arr){
    int size = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    int m = 0;
    ink r = size-1;

    while(m<=r){
      if(arr[m] == 0){
        swap(arr[m], arr[l]);
      }else if(arr[m] == 1){
        m++;
    }else if(arr[m] == 2){
      swap(arr[m], arr[h])
    }
    } 
    return arr;
}
int main(){
  int arr[] = {1,0,0,0,1,1,0,1,0,0,1};
  int sarr[] = find(arr);

  for(int i=0; i<sarr.size(); i++){
    cout<<sarr[i]<<" ";
  }

  return 0;
}