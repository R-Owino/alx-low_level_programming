#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in array
 * @array: array of element input
 * @cmp: pointer to function to be used to compare values
 * Return: index of the first element, otherwise -1 if size <= 0
 *	or no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
