#include <stdio.h>

/**
 * main - returns number of arguments
 *
 * @argc: argument counter
 *
 * @argv: argument array
 *
 * Return: 0
 */


int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

