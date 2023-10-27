#include "main.h"

/**
 * flip_bits - This returns the number of bits needed to be flipped to move
 * from one number to the other
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}
