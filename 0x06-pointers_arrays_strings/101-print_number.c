#include "main.h"

/**
 * print_number - Prints an integer
 * @a: number to be printed
 *
 * Return: void
 */

void print_number(int a)
{
	unsigned int m, d, count;

	if (a < 0)
	{
		_putchar(45);
		m = a * -1;
	}
	else
	{
		m = a;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
