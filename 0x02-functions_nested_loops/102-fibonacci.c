#include <stdio.h>

/**
 * main - entry point
 * Description: print the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;

	int term1 = 1, term2 = 2;

	int term3 = term1 + term2;

	printf("%d, %d, ", term1, term2);

	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", term3);
		term1 = term2;
		term2 = term3;
		term3 = term1 + term2;
	}
	printf("\n");
	return (0);
}
