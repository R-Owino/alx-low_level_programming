#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, initialized with a specific char
 * @size: size of the array
 * @c: the specific char
 * Return: pointer to array, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
