#include <stdio.h>

/**
 * main - entry point
 * Description - output tripple numbers except same combinations
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k = 0;

	while (k < 10)
	{
		j = 0;
		while (j < 10)
		{
			i = 0;
			while (i < 10)
			{
				if (i != j && j != k && k < j && j < i)
				{
					putchar('0' + k);
					putchar('0' + j);
					putchar('0' + i);

					if (i + j + k != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				i++;

			}

			j++;

		}

		k++;
	}
	putchar('\n');
	return (0);
}
