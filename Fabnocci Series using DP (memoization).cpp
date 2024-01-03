//Fabnocci Series 
#include <iostream>
#include <vector>

using namespace std;

int f(vector<int> &dp, int n){
    if(n <= 1){
        return n;
    }
    
    if(dp[n] != -1) return dp[n];
    
    return dp[n] = f(dp, n-1) + f(dp, n-2);
}

int main(){
    int n;
    cin >> n;
    
    vector<int> dp(n+1, -1);
    
    int number = f(dp, n);
    cout << number << endl;
    return 0;
}
