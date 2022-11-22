/* Program that calculates the sum based on the following example: 2234 = pow(2,4) + pow(2,3) + pow(3,2) + pow(4,1) */

#include <stdio.h>


int main() {
   int b, power = 1;
   do {
      scanf("%d", & b);
   }
   while (b <= 0);
   
   int sum = 0;
   
   while (b) 
      {
      int digit = b % 10;
      int tmp = 1;
        for (int i = 1; i <= power; i++) 
        {
           tmp *= digit;
        }
      sum += tmp;
      power++;
      b = b / 10;
   }
   printf("%d", sum);
  
   return 0;
}
