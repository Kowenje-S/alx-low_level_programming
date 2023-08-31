#include "main.h"

/**
 * clear_bit - sets the value of bit at a given index to 0
 * @n: ..
 * @index: ...
 *
 * Return: ..
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;

	if (index > 63)
		return (-1);

	c = 1 << index;

	if (*n & c)
		*n ^= c;

	return (1);
}
