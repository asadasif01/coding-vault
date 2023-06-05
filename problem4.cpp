//Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
//Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
//Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
//Return k.

#include<iostream>
using namespace std;
int solveproblem(int nums[], int val, int size){
        int k = 0;
        // int size = nums.size();
        bool value = false;
        for(int i = 0; i<size; i++){
            if(val == nums[i]){
                k++;
                nums[i] = -1;
            }
        }
        k = size - k;
        int l = 0;
        int r = size-1;
        while(l < r){
            if(nums[r] == -1){
                r--;
            }

            if(nums[l] == -1 && nums[r] != -1){
                swap(nums[l], nums[r]);
                r--;
                l++;
            }

        if(nums[l] != -1){
            l++;
        }

        }

    //   cout<<k;


        return k;
}

int main(){
    int nums[] = {3,2,2,3};
    int val = 3, size = sizeof(nums)/sizeof(nums[0]);
    int k = solveproblem(nums,val,size);
    cout<<k;
    return 0;
}
