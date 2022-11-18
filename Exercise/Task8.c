/* Write a C program that accepts some integers from the user and find the highest value and the input position. */

#include <stdio.h>

int main() 
{
	int n, number, max=0, num_pos=0;
	scanf("%d", &n);
  
	for(int i = 0; i < n; i++) {
		scanf(" %d", &number);
    if(number > max) 
    {
			max = number;
			num_pos = i;
		}
	}
	
	printf("Highest value: %d\nPosition: %d\n", max, num_pos+1);
  
	return 0;
}
