#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: strin to be printed between strings
 * @n: number of strings to be passed to the function
 * Return: string, otherwise nothing if separator is null and nil
 * if 1 string is null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
		va_end(args);
		printf("\n");
}
