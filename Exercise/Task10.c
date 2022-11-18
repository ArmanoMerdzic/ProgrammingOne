/* Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/n. */

#include <stdio.h>

int main() {
  
  int n;
	float S = 0;
  
  scanf("%d", &n);
  
	for(int i=1; i<=n; i++)
	{
		S += (float)1/i;
  }
  
  printf("Value of S: %.2f\n", S);

	return 0;
}
