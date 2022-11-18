/* Write a C program to print all numbers between a and b which divided by a specified number and the remainder will be 5. */

#include <stdio.h>

int main() {
	int x, a, b;
	scanf("%d %d %d", &x, &a, &b);
	
	for(int i = a; i < b; i++)
	{
		if((i%x) == 5) 
    {
			printf("%d\n", i);
		}
	}
  
	return 0;
}
