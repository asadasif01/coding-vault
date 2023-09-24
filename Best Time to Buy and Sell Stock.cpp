#include<iostream>
using namespace std;

int findprofit(int prices[], int size){
        int buy=prices[0]; 
        int sell = 0;
        int smallprofit = 0;
        int largeprofit = 0;
        
        for(int i=1; i<size; i++){
            if(prices[i] < buy){
                buy = prices[i];
                // cout<<"Buy : "<<buy<<endl;
            }

            if(prices[i] > buy){
                sell = prices[i];
                //cout<<"Sell : "<<sell<<endl;
                smallprofit = sell - buy;
                //cout<<"Small Profit : "<<smallprofit<<endl;
            }

            if(smallprofit > largeprofit){
                largeprofit = smallprofit;
            }
        }
        if(largeprofit <= 0){
            return 0;
        }
        return largeprofit;
}

int main(){
    int profit;
    int prices[] = {5,4,-2,-1,4,9,3};
    int size = sizeof(prices)/sizeof(prices[0]);
    profit = findprofit(prices, size);
    cout<<"Profit is : "<<profit<<endl;
    return 0;
}