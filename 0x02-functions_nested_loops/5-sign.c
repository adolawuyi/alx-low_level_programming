#include "main.h"
/**
 * sign - prints the sign of a number
 * Return: 1 if n is greater than zero, 1 equals zero,
 * -1 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	}

	else if (n == 0)
	{
	_putchar('0');
	}

	else
	{
	_putchar('-');
	}

	return (-1);
}
