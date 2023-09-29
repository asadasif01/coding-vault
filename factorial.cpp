#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value : "<<endl;
    cin>>n;

    int factorial = n;

    if(n == 0){
        cout<<"Factorial : "<<n<<endl;
        return 0;
    }
    for(int i=n-1; i>0; i--){
        factorial = factorial*i;
    }
    cout<<"Factorial : "<<factorial<<endl;
    return 0;
}