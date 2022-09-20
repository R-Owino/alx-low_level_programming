#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords for 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int agg;
	char r;

	srand(time(NULL));

	while (agg <= 2645)
	{
		r = rand() % 128;
		agg += r;
		printf("%c", r);
	}
	putchar(2772 - agg);
	return (0);
}
