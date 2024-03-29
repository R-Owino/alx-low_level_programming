#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *	using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 *	otherwise -1 if value is not present or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int index, step, curr, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt((double)size);
	curr = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		curr++;
		prev = index;
		index = curr * step;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
