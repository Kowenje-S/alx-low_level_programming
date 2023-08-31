#include "main.h"

/**
 * set_bit - a function that set the value of bit at a given index to 1
 * @n: ..
 * @index: ..
 *
 * Return: ..
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
