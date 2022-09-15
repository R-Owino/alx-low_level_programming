#include "main.h"

/**
 * print_line - entry point
 * @n: number of times the character _ should be printed
 * Description: Draw staright line in the terminal
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}


}
