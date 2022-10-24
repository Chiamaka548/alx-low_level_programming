#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: 10 times of the numbers from 0 to 14
 */

void more_numbers(void)
{
	int a, x;

	for (a = 0; a < 10; a++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}

			_putchar((x % 10) + '0');
		}

		_putchar('\n');
	}
}
