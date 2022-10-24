#include "main.h"

/**
 * print_line - Draws a straight line according to parameter
 * @a: The number of lines to draw
 *
 * Return: empty
 */

void print_line(int a)
{
	int b;

	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < a; b++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
