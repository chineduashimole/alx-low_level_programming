#include "main.h"

/**
 * _isalpha - this function checks for alphabetic character
 * @c: the character to be checked
 * return: 1 for alphabetic character, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
