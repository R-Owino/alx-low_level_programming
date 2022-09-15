#include "main.h"

/**
 * print_most_numbers - entry point
 * Description: output numbers except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int var = 0;

	while (var < 10)
	{
		{
			if (var != 2 && var != 4)
			{
				_putchar(var + '0');
			}
		}
		var++;
	}
	_putchar('\n');
}
