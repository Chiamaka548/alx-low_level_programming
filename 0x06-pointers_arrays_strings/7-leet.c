#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @a: The string to encode
 *
 * Return: The encoded string
 */

char *leet(char *a)
{
	int u = 0, v = 0, y = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char x[5] = {'4', '3', '0', '7', '1'};

	while (a[u])
	{
		v = 0;

		while (v < y)
		{
			if (a[u] == r[v] || a[u] - 32 == r[v])
			{
				a[u] = x[v];
			}

			v++;
		}

		u++;
	}

	return (a);
}
