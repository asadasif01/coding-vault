//Median of Two Sorted Arrays
#include<iostream>
#include<algorithm>
using namespace std;

int findMedianSortedArrays(int nums1[], int nums2[], int size1, int size2){
    
    int size = size1+size2;
    int array[size];
    int index = 0;
    for(int i = 0; i<size1; i++){
        array[index] = nums1[i];
        index++;
    }
    
    for(int i = 0; i< size2; i++){
        array[index] = nums2[i];
        index++;
    }
    sort(array, array + size);
    
    int a = size/2;
    int median;
    if(size%2 == 0){
        return median = array[a-1]+array[a];
    }else{
        return median = array[a];
    }
}

int main(){
    int nums1[] = {1,3};
    int nums2[] = {2,4};

    int size1 = sizeof(nums1)/sizeof(nums1[0]); 
    int size2 = sizeof(nums2)/sizeof(nums2[0]); 
   
    int median = findMedianSortedArrays(nums1, nums2, size1, size2);
    cout<<median<<endl;
    return 0;
} 
