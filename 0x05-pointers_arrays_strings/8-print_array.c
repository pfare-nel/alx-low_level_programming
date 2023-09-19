#include "main.h"

/**
 * print_array - A function that prints n elements of an array
 * @a: Array to be printed
 * @n: Number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);

		if (i < (n - 10))
				printf(", ");
	}
	printf("\n");
}

