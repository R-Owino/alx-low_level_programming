#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: carrier variable
 * Description: Output all integers from n-98
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}
