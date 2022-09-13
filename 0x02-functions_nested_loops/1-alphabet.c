#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
