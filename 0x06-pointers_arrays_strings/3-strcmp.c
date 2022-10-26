#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int u = 0, v = 0, x = 0, y = 0, lim;

	while (s1[u])
	{
		u++;
	}

	while (s2[v])
	{
		v++;
	}

	if (u <= v)
	{
		lim = u;
	}
	else
	{
		lim = v;
	}

	while (x <= lim)
	{
		if (s1[x] == s2[x])
		{
			x++;
			continue;
		}
		else
		{
			y = s1[x] - s2[x];
			break;
		}

		x++;
	}

	return (y);
}

