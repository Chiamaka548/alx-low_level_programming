#include "main.h"

/**
 * _isupper - Checks if a character is uppercase or not
 * @c: Character to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
