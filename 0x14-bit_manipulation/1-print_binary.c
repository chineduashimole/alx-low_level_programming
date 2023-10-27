#include "main.h"

/**
 * print_binary - This function prints in binary form
 * @n: The unsigned long int.
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		 _putchar('0');
	}
}
