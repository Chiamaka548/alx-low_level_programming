#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, b;

	while (dest[x])
	{
		x++;
	}

	for (b = 0; src[b] != 0; b++)
	{
		dest[x] = src[b];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
