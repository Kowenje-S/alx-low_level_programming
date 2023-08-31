#include "main.h"

/**
 * get_endianness - a fumction that checks endianess
 *
 * Return: ..
 *
 */

int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return ((int)*b);
}
