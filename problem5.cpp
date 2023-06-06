/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
