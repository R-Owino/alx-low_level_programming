#include <stdio.h>

/**
 * main - entry point
 * Description - using putchar to output numbers 0-9
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);
}
