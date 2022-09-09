#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: Compare a random's number last digit with 5, 0, and 6
 * Return: 0
 */
int main(void)
{
	int n;
	int LDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LDigit = n % 10;

	if (LDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LDigit);
	}
	else if (LDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LDigit);
	}
	return (0);
}
