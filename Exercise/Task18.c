/* Pyramid. */

#include <stdio.h>

int main() {
  int n;
  do {
    scanf("%d", &n);
  } while (n <= 0);
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n - i; j++) {
      printf(" ");
    }
    for (int k = 1; k <= (2 * i) / 2; k++) {
      printf("%d", k % 10);
    }
    for (int d = i - 1; d >= 1; d--) {
      printf("%d", d % 10);
    }
    printf("\n");
  }
  return 0;
}
