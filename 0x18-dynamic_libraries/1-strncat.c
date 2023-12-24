#include "main.h"
/**
 * _strncat - this function concatenates two strings using an
 *	inputted number of bytes from src
 *
 * @dest: the destination of the string to be appended upon
 * @src: the string to be appended upon @dest
 * @n: the number of bytes from src to be appended upon dest
 * return: pointer to the resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
