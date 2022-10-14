#include <stdio.h>

/**
*main - Prints 3 combination of numbers
*Return: Always 0 (Success)
*/

int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (u = '0'; u = '9'; u++)
			{
				if (c < i && i < u)
				{
					putchar(c);
					putchar(i);
					putchar(u);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
