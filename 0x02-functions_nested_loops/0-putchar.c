/**
 * Header file main.h contains the function prototype for this program
 */

#include "main.h"

/**
 * main - Entry point
 * description - print _putchar
 * Return: 0
 */

int main(void)
{
	char k[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(k[i]);
		i++;
	}


	_putchar('\n');

	return (0);
}
