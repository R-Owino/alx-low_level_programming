#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *  of integers
 *
 *  @a: pointer to integer
 *
 *  @size: size of the matrix
 *
 *  Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i];
		diag2 += a[size - i - 1];
		a += size;
	}

	printf("%d, ", diag1);
	printf("%d\n", diag2);
}
