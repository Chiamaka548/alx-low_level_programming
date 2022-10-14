#include <stdio.h>

/**
*main - Prints 3 combination of numbers
*Return: Always 0 (Success)
*/

int main(void)
{
	int n, i, u, k;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (u = 48; u <= 57; u++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (((u + k) > (n + i) && u >= n) || n < u)
					{
						putchar(n);
						putchar(i);
						putchar(' ');
						putchar(u);
						putchar(k);

					if (n + i + u + k == 227 && n == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
