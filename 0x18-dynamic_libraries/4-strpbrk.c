#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - this function locates the first occurrence in the string s
 *	of any of the bytes in the string accept
 * @s: the string where the first occurrence is located
 * @accept: another string 
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *	or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
