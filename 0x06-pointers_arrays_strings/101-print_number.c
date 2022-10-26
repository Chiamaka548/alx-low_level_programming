#include "main.h"

/**
 * print_number - Prints any integer with putchar
 * @x: Number to print
 *
 * Return: Nothing
 */

void print_number(int x)
{
	unsigned int a;

	if (x < 0)
	{
		_putchar('-');
		x *= -1;
	}

	a = x;

	if (a / 10)
		print_number(a / 10);

	_putchar(a % 10 + '0');
}
