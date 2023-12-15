#include <iostream>
#include<vector>

using namespace std;

void mergeArrays(vector<int> &arr1, vector<int> &arr2, int size1, int size2){
    int i = 0;
    int j = 0;
    vector<int> arr3;
    while(i<size1 && j<size2){
        if(arr1[i] <= arr2[j]){
            arr3.push_back(arr1[i]);
            i++;
        }else{
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    
    while(i<size1){
        arr3.push_back(arr1[i]);
        i++;
    }
    
    while(j<size2){
        arr3.push_back(arr2[j]);
        j++;
    }
    
    for(int j : arr3){
        cout<<j<<" ";
    }
}

int main()
{
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {11,23,53,65};
        
    int size1 = arr1.size();
    int size2 = arr2.size();
        
    mergeArrays(arr1, arr2, size1, size2);

    return 0;
}
