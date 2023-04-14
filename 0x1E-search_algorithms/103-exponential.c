#include "search_algos.h"

/**
 * binary_search_adv - searches for a value in a sorted array of integers
 *		using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: leftmost index of the subarray to search in
 * @right: rightmost index of the subarray  to search in
 * @value: value to search for
 *
 * Return: index where value is located
 *	otherwise -1 if value is not present or array is NULL
 */

int binary_search_adv(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;
		if (array[index] == value)
			return (index);
		else if (array[index] < value)
			left = index + 1;
		else
			right = index - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *		using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 *	otherwise -1 if value is not present or array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, right;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	right = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search_adv(array, i / 2, right, value));
}
