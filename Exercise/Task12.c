/* Program that calculates the sum based on the following example: 2234 = pow(2,1) + pow(2,2) + pow(3,3) + pow(4,4) */

#include <stdio.h>

int main() 
{
  int b, power = 0;
  do {
    scanf("%d", &b);
  } while (b <= 0);

  int copy_ = b;
  int sum = 0;

  while (copy_) {
    power++;
    copy_ /= 10;
  }
  while (b) {
    int digit = b % 10;
    int tmp = 1;
    for (int i = 1; i <= power; i++) {
      tmp *= digit;
    }
    sum += tmp;
    power--;
    b = b / 10;
  }
  printf("%d", sum);
  return 0;
}
