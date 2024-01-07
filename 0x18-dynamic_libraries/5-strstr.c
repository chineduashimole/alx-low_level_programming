#include <stdio.h>
#include "main.h"

/**
 * _strstr - this  function finds the first occurrence of the substring needle
 *	in the string haystack.
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the beginning of the located substring,
 *	or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}