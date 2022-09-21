#include "main.h"

/**
 * reverse_array - reverse the contents of an array
 *
 * @a: the array
 *
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	for ( ; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}
