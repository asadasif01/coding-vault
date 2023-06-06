/******************************************************************************
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
*******************************************************************************/

#include <iostream>
using namespace std;

int RemoveDuplicates(int nums[], int size){
        // int size = nums.size();
        if(size<=1){
            return size;
        }

        int count = 1;
        for(int i = 1; i<size; i++){
            if(nums[i] != nums[count-1]){
                nums[count] = nums[i];
                count++;
            }
        }
        
        cout<<"Unique Array is : ";
        for(int i = 0; i<count; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        
        return count;
    
}

int main()
{
    int array[] = {0,0,1,1,1,2,2,3,3,4};
    int size = sizeof(array)/sizeof(array[0]);
    int count = RemoveDuplicates(array, size);
    cout<<"The number of Unique Values are : "<<count<<endl;
    return 0;
}
