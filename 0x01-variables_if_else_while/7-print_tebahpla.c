#include <stdio.h>
/**
 * main - entry point
 * Description - output the alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char var = 'z';

	while (var >= 'a')
	{
		putchar(var);
		var--;
	}
	putchar('\n');
	return (0);
}
