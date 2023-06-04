/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>
using namespace std;

 int divide(int dividend, int divisor) {
        int count = 0;
        bool number = false;
        if(divisor < 0){
            number = true;
            divisor = fabs(divisor);
        }
        
        while(dividend >= divisor){
            dividend = dividend - divisor;
            count++;
        }
        
        if(number){
           count = count-count-count; 
        }
        return count;
    }

int main()
{
   int value = divide(7,-3);
   cout<<value;

    return 0;
}
