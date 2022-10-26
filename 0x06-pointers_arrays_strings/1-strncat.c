#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @a: The limit of tthe concatenation
 *
 * Return: A pounter to the resulting string destination
 */

char *_strncat(char *dest, char *src, int a)
{
	int x = 0, b = 0;

	while (dest[x])
	{
		x++;
	}

	while (b < a && src[b])
	{
		dest[x] = src[b];
		x++;
		b++;
	}

	dest[x + b + 1] = '\0';

	return (dest);
}

