#include <stdio.h>

/**
 * _strlen - this function returns the length of a string
 * @str: the string to get the lenght of 
 * return: the length of the string @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
