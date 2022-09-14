#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - entry point
 * Description: first 98 fibonacci
 * Return: 0
 */

int main(void)
{
	unsigned long int t1 = 0, t2 = 0, x1 = 1, x2 = 2;
	unsigned long int temp1, temp2, temp3;
	int i;

	printf("%lu, %lu, ", x1, x2);
	for (i = 2; i < 98; i++)
	{
		if (x1 + x2 > LARGEST || t1 > 0 || t2 > 0)
		{
			temp1 = (x1 + x2) / LARGEST;
			temp2 = (x1 + x2) % LARGEST;
			temp3 = t1 + t2 + temp1;
			t1 = t2, t2 = temp3;
			x1 = x2, x2 = temp2;
			printf("%lu%010lu", t2, x2);
		}
		else
		{
			temp2 = x1 + x2;
			x1 = x2, x2 = temp2;
			printf("%lu", x2);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}

