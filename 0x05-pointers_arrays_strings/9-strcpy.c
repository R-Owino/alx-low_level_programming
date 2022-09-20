#include "main.h"

/**
 * _strcpy - copies string pointed by src to buffer pointed by dest
 *
 * @dest: buffer destination
 *
 * @src: points to string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
