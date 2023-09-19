#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: Parameter to swap
 * @b: Parameter to swap
 */


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

