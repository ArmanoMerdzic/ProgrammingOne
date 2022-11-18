/* Print all numbers from the interval [a,b] whose sum of even and odd digits is equal. */

#include <stdio.h>

int main()
{
	int a, b;
	do 
  {
		scanf("%d %d", &a, &b);
	} while (a >= b);
  
	for (int i = a; i <= b; i++)
	{
		int num = i;
		int sum_even = 0, sum_odd = 0;
		while (num)
		{
			int digit = num % 10;
			num = num / 10;
			if (digit % 2 == 0)
				sum_even += digit;

			else
			{
				sum_odd += digit;
			}
		}

		if (sum_even == sum_odd)
			printf("%d", i);
	}

	return 0;
}
