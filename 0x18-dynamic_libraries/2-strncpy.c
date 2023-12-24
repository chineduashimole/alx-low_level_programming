#include "main.h"

/**
 * _strncpy - this function copies an inputted number of bytes
 *	from one string to another
 * @dest: the buffer which stores the copied string
 * @src: the source string
 * @n: the maximum number of bytes to be copied from @src
 * return: pointer to the resulting string destination @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
