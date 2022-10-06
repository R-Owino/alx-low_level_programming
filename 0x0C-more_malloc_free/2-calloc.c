#include <stdlib.h>
#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: pointer to memory block to fill
 * @b: characters to fill
 * @n: number of bytes to fill
 * Return: pointer to filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: an array of elements
 * @size: size of the array
 * Return: pointer to allocated memory, otherwise 0 if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
