#include "main.h"
/**
 * _isdigit - this function checks if a character is a digit
 * @x: the number to be checked
 * return: 1 of character is a digit, else 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
