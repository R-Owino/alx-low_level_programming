#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the min element
 * @max: the max element
 * Return: pointer to new array, array is ordered from min to max
 */

int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
