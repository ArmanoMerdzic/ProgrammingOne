/* Check if some given number is equal to the sum of each digit raised to the power of that same digit. 
   Example: 112 != pow(1,1) +pow(1,1)+ pow(2,2) */

#include <stdio.h>

int main()
{
	int d;
	scanf("%d", &d);

	int copy_value = d;
	int sum = 0;

	while (copy_value)
	{
		int digit = copy_value % 10;
		int res = 1;

		for (int i = 0; i < digit; i++)
		{
			res *= digit;
		}

		sum += res;
		copy_value = copy_value / 10;
	}

	if (sum == d)
		printf("YES");
  else
    printf("NO");
  
	return 0;
}
