#include "main.h"

/**
 * binary_to_uint - a function that converts a binary to unsigned int
 * @b: ..
 *
 * Return: ...
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int un;
	int len, base;

	if (!b)
		return (0);

	un = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			un += base;
		}
	}

	return (un);
}
