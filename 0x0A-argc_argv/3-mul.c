#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 integers
 *
 * @argc: argument counter
 *
 * @argv: argument array
 *
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char **argv)
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
