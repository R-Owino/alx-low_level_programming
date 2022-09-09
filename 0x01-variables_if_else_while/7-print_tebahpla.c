#include <stdio.h>

int main(void)
{
	char var = 'z';

	while (var >= 'a')
	{
		putchar(var);
		var--;
	}
	putchar('\n');
	return 0;
}
