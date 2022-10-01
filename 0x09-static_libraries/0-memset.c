#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory area
 *		pointed to by s with the constant byte b
 *
 * @s: pointer to the memory
 *
 * @b: fills the n bytes of memory
 *
 * @n: bytes of memory to be filled
 *
 * Return: pointer to memory, s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
