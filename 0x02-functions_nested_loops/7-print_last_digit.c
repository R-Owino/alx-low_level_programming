#include "main.h"

/**
 * print_last_digit - entry point
 * @n: carrier variable
 * Description: outputs last digit of a number
 * Return: 0
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}

	_putchar('0' + last);
	return (last);
}
