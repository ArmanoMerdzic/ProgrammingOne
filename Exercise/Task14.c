/* We are looking for the first 10 prime numbers greater than the entered number. */

#include <stdio.h>

int main() {
  int n;
  do {
    scanf("%d", &n);
  } while (n <= 0);
  int counter = 0;
  for (int i = n + 1; counter < 10; i++) {
    int flag = 0;
    for (int j = 2; j < n / 2; j++) {
      if (i % j == 0) flag = 1;
    }
    if (flag == 0) {
      printf("%d\n", i);
      counter++;
    }
  }
  return 0;
}
