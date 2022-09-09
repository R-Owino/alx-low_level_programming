#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description - output the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char var = 'a';

	while (var <= 'z')
	{
		putchar(var);
		var++;
	}
	putchar('\n');
	return (0);
}
