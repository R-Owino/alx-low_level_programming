#include "main.h"
/**
 * times_table - Entry point
 * Description: 9x9 multiplication table
 * Return: void
 */

void times_table(void)
{
	int r = 0, c, val;

	while (r <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			val = r * c;
			if (c == 0)
			{
				_putchar(val + '0');
			}
			else if (val < 10)
			{
				_putchar(' ');
				_putchar(val + '0');
			}
			else
			{
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
			}
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		_putchar('\n');
		r++;
	}
}
