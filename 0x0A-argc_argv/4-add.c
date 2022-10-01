#include <stdio.h>
#include <stdlib.h>

/**
 * digit_checker - checks if argument passed is integer
 * @c: string passed
 * Return: 0 if success, otherwise 1
 */

int digit_checker(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] < '0' || c[i] > '9')
			return (1);
	}
	return (0);
}

/**
 * main - print sum of positive numbers
 * @argc: argument counter
 * @argv: argument array
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char **argv)
{
	int sum = 0;

	while (--argc)
	{
		if (digit_checker(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
