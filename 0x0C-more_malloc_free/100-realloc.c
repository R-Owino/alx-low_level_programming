#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory created by malloc
 * @ptr: pointer to current memory space created by malloc
 * @old_size: size of ptr in bytes
 * @new_size: size of new memory block in bytes
 * Return: pointer to new allocated memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	temp_ptr = ptr;

	for (i = 0; i < old_size; i++)
		new_ptr[i] = temp_ptr[i];

	free(ptr);
	return (new_ptr);
}
