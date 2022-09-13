#include "main.h"

/**
 * print_sign - Entry point
 * @n: carrier variable
 * Description: print the sign of a number
 * Return: 1 OR 0 OR -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
