/* We are looking for the first prime number greater than the entered number. */

#include <stdio.h>

int main() {
  int n;
  do {
    scanf("%d", &n);
  } while (n <= 0);
  for (int i = n + 1;; i++) {
    int flag = 0;
    for (int j = 2; j < n / 2; j++) {
      if (i % j == 0) flag = 1;
    }
    if (flag == 0) {
      printf("%d", i);
      return 0;
    }
  }

  return 0;
}
