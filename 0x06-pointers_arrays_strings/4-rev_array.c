#include "main.h"

/**
 * reverse_array - A function that reverses an array
 * @a: The array
 * @n: Number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}


