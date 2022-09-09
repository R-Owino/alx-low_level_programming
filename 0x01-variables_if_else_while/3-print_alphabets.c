#include <stdio.h>

/**
 * main - entry point
 * Description - Output the alphabet in lowercase then uppercase
 * Return: 0
 */

int main(void)
{
	char i = 'A';
	char j = 'a';

	while (i <= 'Z')
	{
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}

		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
