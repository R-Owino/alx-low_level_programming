#include "main.h"

/**
 * _strncat - concatenates 2 strings using at most n bytes from src
 *
 * @dest: the destination string
 *
 * @src: string to be appended
 *
 * @n: number of bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, idx = 0; /* i is the length of the destination string */

	while (dest[idx++])
		i++;

	for (idx = 0; idx < n && src[idx]; idx++)
		dest[i++] = src[idx];

	return (dest);


}
