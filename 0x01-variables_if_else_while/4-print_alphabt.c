#include <stdio.h>

/**
 * main - entry point
 * Description - Output all alphabet except e and q
 * Return: 0
 */

int main(void)
{
	char var = 'a';

	while (var <= 'z')
	{
		{
			if (var != 'e' && var != 'q')
			{
				putchar(var);
			}
		}
		var++;
	}
	putchar('\n');
	return (0);
}
