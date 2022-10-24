#include "main.h"

/**
 * print_diagonal - Draws diagonal lines according to parameter
 * @x: The number of times to print diagonal lines
 *
 * Return: empty
 */

void print_diagonal(int x)
{
	int a, b;

	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < x; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
