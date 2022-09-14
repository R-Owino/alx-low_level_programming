#include "main.h"
/**
 * print_times_table - Entry point
 * @n: carrier variable
 * Description: nxn multiplication table
 * Return: void
 */
void print_times_table(int n)
{
	int r, c, val;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			val = r * c;
			if (c == 0)
			{
				_putchar(val + '0');
			}
			else if (val < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(val + '0');
			}
			else if (val < 100)
			{
				_putchar(32);
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
			}
			else
			{
				_putchar((val / 100) + '0');
				_putchar(((val - 100) / 10) + '0');
				_putchar((val % 10) + '0');
			}
			if (c < n)
			{
				_putchar(',');
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
