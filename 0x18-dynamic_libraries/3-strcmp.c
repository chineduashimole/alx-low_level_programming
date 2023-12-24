#include "main.h"

/**
 *  _strcmp - this function compares pointers to two strings
 *  @s1: pointer to the first string to be compared
 *  @s2: pointer to the second string to be compared
 *  return: if s1 == s2, 0;
 *  if s2 > s1, the negative difference of the first unmatched character
 *  if s2 < s1, the positive difference of the first unmatched character
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (r);
}
