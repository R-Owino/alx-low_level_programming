#include "search_algos.h"

/**
 * bin_search_rec - Searches for a value in an integer array using
 *	binary search algorithm recursively
 * @array: integer array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located
 *	otherwise -1 if value is not present or array is NULL
 */

int bin_search_rec(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (bin_search_rec(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (bin_search_rec(array, half + 1, value));

	half++;
	return (bin_search_rec(array + half, size - half, value) + half);
}

/**
 * advanced_binary - searches for a value in an array of integers using
 *		binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located
 *	otherwise -1 if value is not present or array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = bin_search_rec(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
