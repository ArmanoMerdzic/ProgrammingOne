/* Write a C program to calculate the average marks of some students. 
   Input 0 (excluding to calculate the average) or negative value to terminate the input process. */
   
#include <stdio.h>

int main() 
{
	int marks, m, i, a=0, total = 0;
	float f;
  
	printf("Input marks (0 to terminate): ");

	for(i = 0; ; i++) 
	{
		scanf("%d", &marks);
    
		if(marks <= 0) 
    {
		  break;
		}
		a++;
		total += marks;
	}
  
	f = (float)total/(float)a;
  
	printf("The average mark is: %.2f\n", f);
	return 0;
}
