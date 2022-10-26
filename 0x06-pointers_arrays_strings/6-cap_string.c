#include "main.h"
#include <stdio.h>

/**
 * cap_string - ...
 * @x: ...
 *
 * Return: char value
 */

char *cap_string(char *x)
{
	int u = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (x[u])
	{
		i = 0;

		while (i < cspc)
		{
			if ((u == 0 || x[u - 1] == spc[i]) && (x[u] >= 97 && x[u] <= 122))
				x[u] -= 32;

			i++;
		}

		u++;
	}

	return (x);
}
