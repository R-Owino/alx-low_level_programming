#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: print every minute of a day
 * Return: void
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < j)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');

				if (i != 23 || j != 59)
				{
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
