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
    int nums[] = {0,1,2,2,3,0,4,2};
    int val = 2, size = sizeof(nums)/sizeof(nums[0]);
    int k = solveproblem(nums,val,size);
    cout<<k;
    return 0;
}