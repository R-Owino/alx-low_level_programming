/**
 * Header file main.h contains the function prototype for this program
 */

#include "main.h"

/**
 * main - entry point
 * description - print _putchar
 * Return: 0
 */

int main(void)
{
	char k[9] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(k[i]);
		i++;
	}


	_putchar('\n');

	return (0);
}
