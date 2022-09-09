#include <stdio.h>

/**
 * main - entry point
 * Description - output hex numbers in lowercase
 * Return: 0
 */

int main(void)
{
	char num = '0', ch = 'a';

	while (ch <= 'f')
	{
		while (num <= '9')
		{
			putchar(num);
			num++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
