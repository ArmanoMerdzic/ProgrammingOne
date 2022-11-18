/* Print all numbers from the interval [a,b] that contain the hexadecimal digit 0xA and are prime at the same time. */

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++)
	{
		int broj = i;

		while (broj)
		{
			int cifra = broj % 16;
			if (cifra == 0xa)
			{
				int kopija = i;
				int flag = 0;

				for (int j = 2; j <= i / 2; j++)
				{
					if (kopija % j == 0)
						flag = 1;
				}

				if (flag == 0)
					printf("Number %d is a prime and has a 0xA digit.", i);
			}

			broj = broj / 16;
		}
	}

	return 0;
}
