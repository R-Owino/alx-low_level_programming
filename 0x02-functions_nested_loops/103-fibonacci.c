#include <stdio.h>

/**
 * main - entry point
 * Description: Another fibonacci version
 * Return: 0
 */

int main(void)
{
	int term1 = 0, term2 = 1, term3 = 0;
	int sum = 0;

	while (term3 < 4000000)
	{
		term3 = term1 + term2;
		term1 = term2;
		term2 = term3;
		if (term3 % 2 == 0)
			sum += term3;
	}
	printf("%i\n", sum);
	return (0);
}
