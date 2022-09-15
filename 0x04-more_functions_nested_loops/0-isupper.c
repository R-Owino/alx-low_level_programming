#include "main.h"

/**
 * _isupper - Checks for uppercase Alphabetic Characters
 *
 * @c: Alphabetic character
 *
 * Return: 1 (Success) OR 0 (Failure)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
