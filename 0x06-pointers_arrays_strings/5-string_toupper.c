#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @x: the string to be modified
 *
 * Return: char var
 */

char *string_toupper(char *x)
{
	int u = 0;

	while (x[u])
	{
		if (x[u] >= 97 && x[u] <= 122)
		{
			x[u] -= 32;
		}

		u++;
	}

	return (x);
}
