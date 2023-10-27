#include "main.h"

/**
 * get_endianness - This function checks the endianness
 *
 * Return: 0 if endian is bit, 1 if endian is little
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
