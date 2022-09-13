#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar, followed by a new line
 * Return: Always 0 (success)
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
