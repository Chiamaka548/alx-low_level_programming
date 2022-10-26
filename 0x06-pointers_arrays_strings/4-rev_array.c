#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 * @b: An array of integers
 * @x: Number of elements to swap
 *
 * Return: empty
 */

void reverse_array(int *b, int x)
{
	int *u, v, aux, y;

	u = b;

	for (v = 1; v < x; v++)
	{
		u++;
	}

	for (y = 0; y < v / 2; y++)
	{
		aux = b[y];
		b[y] = *u;
		*u = aux;
		u--;
	}
}
