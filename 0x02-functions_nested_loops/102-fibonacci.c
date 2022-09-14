#include <stdio.h>

/**
 * main - entry point
 * Description: print the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;

	long int term1 = 1, term2 = 2;

	long int term3 = term1 + term2;

	printf("%ld, %ld, ", term1, term2);

	for (i = 3; i <= 50; i++)
	{
		printf("%ld", term3);
		term1 = term2;
		term2 = term3;
		term3 = term1 + term2;

		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
