#include <iostream>
using namespace std;

int calculateMaxArea(int height[], int size);

int main()
{
    int height[] = {1,8,6,2,5,4,8,3,7};
    int size = 9;
    
    int totalArea = calculateMaxArea(height, size);
    cout<<totalArea<<endl;
    return 0;
}

int calculateMaxArea(int height[], int size){
    int area = 1, totalArea = 1; //For current calculate area(area) & max calculate area(totalAreaarea)
    int l = 0, r = size-1;       //To track indexes
    int minValue = 0;       //To find minValue between l & r;
    
    while(l<r){
        (height[l] > height[r])? minValue = height[r] : minValue = height[l];
        area = minValue * (r-l);
        if(height[l] < height[r]){
            l++;
        }else{
            r--;
        }
        
        if(area>totalArea){
            totalArea = area;
        }
    }
    
    return totalArea;
}