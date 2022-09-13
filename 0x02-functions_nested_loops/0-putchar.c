/**
 * Header file main.h contains the function prototype for this program
 */

#include <unistd.h>
#include "main.h"

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
