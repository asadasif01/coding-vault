//Find Division without using *,%,/ operators

#include <iostream>
#include<cmath>
using namespace std;

int divide(int dividend, int divisor) {
        int count = 0;
        bool number = false;
        bool number1 = false;
        if(divisor < 0){
            number = true;
            divisor = fabs(divisor);
        }
        if(dividend < 0){
            number1 = true;
            dividend = fabs(dividend);
        }
        
        while(dividend >= divisor){
            dividend = dividend - divisor;
            count++;
        }
        
        if(number){
           count = count-count-count; 
        }
        if(number1){
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
