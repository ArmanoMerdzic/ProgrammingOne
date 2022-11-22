/* Find the first number smaller than the one entered, whose sum of the factorial of each digit is equal to that number. */

#include <stdio.h>

int main() {
  int n;
  do {
    scanf("%d", &n);
  } while (n <= 0);
  for (int i = n - 1; i >= 0; i--) {
    int num = i;
    int sum = 0;
    while (num) {
      int digit = num % 10;
      int tmp = 1;
      for (int j = digit; j > 1; j--) {
        tmp *= j;
      }
      sum += tmp;
      num /= 10;
    }
    if (sum == i) {
      printf("%d", i);
      return 0;
    }
  }
  return 0;
}
