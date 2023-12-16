#include <iostream>
using namespace std;

int main()
{   
    int number;
    cout<<"Enter number : ";
    cin>>number;
    
    string nums[] = {"even", "odd"}
    
    cout<<nums[number%2]<<endl;

    return 0;
}
