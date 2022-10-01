#include "main.h"

/**
 * _isdigit - Checks for numbers 0-9
 *
 * @c: numeric character
 *
 * Return: 1 (Success) OR 0 (Failure)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
