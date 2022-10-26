#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: The destination value
 * @src: The source value
 * @x: The copy limit
 *
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int x)
{
	int u = 0, v = 0;

	while (src[v])
	{
		v++;
	}

	while (u < x && src[u])
	{
		dest[u] = src[u];
		u++;
	}

	while (u < x)
	{
		dest[u] = '\0';
		u++;
	}

	return (dest);
}
