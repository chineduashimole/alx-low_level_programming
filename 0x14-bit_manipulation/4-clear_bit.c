#inclue "main.h"

/**
 * clear_bit - This sets the value of a bit to 0
 * @n: a pointer to an unsigned long int
 * @index: the index of the bit
 *
 * Return: if successful, 1; otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
