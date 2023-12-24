#include "main.h"

/**
 * _memset - this function function fills the first n bytes of the memory area
 *	pointed to by s with the constant byte b
 * @s: the pointed destination
 * @b: the constant byte
 * @n: the bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
