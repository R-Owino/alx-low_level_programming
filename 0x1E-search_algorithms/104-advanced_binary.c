#include "search_algos.h"

/**
 * binary_search_recursive2 - Searches for a value in an integer array using
 *	binary search algorithm recursively
 * @array: integer array to search in
 * @left: leftmost index of the subarray  to search in
 * @right: rightmost index of the subarray  to search in
 * @value: value to search for
 *
 * Return: index where value is located
 *	otherwise -1 if value is not present or array is NULL
 */

int binary_search_recursive2(int *array, size_t left, size_t right, int value)
{
	size_t mid = left + (right - left) / 2;
	size_t i;

	if (left > right)
		return (-1);

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d%s", array[i], (i == right) ? "\n" : ", ");
	}

	if (array[mid] == value)
	{
		/* Check if the previous element is also equal to value */
		if (mid > left && array[mid - 1] == value)
			/* Search in the left subarray */
			return (binary_search_recursive2(array, left, mid - 1, value));
		else
			/* This is the first occurrence of value */
			return (mid);
	}
	else if (array[mid] > value)
		return (binary_search_recursive2(array, left, mid - 1, value));
	else
		return (binary_search_recursive2(array, mid + 1, right, value));
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
	size_t left = 0;
	size_t right = size - 1;
	size_t i;

	if (array == 0 || size == 0)
		return (-1);

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d%s", array[i], (i == right) ? "\n" : ", ");
		}

		if (array[mid] == value)
		{
			/* Check if the previous element is also equal to value */
			if (mid > left && array[mid - 1] == value)
				/* Search in the left subarray */
				right = mid - 1;
			else
				/* This is the first occurrence of value */
				return (mid);
		}
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
