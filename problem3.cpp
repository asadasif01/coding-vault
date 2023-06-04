//Find Division without using *,%,/ operators

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
