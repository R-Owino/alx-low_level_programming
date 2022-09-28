#include <unistd.h>

/**
 * _putchar: writes chaacter c to output
 *
 * @c: specifies the character to print
 *
 * Return: 1 on success
 * On error, return -1, and set errno appropriately
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
