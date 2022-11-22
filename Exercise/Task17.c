/* Calculate the nth root of a number with a precision of 0.00001. */

#include <stdio.h>

int main() {
  double x;
  int n;
  do {
    scanf("%lf %d", &x, &n);
  } while (n <= 0);
  double eps = 0.00001;
  for (double i = 0;; i += 0.0000001) {
    double tmp = 1.0;
    for (int j = 0; j < n; j++) {
      tmp *= i;
    }
    if (x - eps <= tmp && tmp <= x + eps) {
      printf("%lf", i);
      return 0;
    }
  }
  return 0;
}
