#include "main.h"

/**
 * more_numbers - entry point
 * Description: output 0-14 10x
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');

			_putchar(n % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
