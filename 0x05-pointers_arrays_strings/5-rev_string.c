#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: Input string to be reversed
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	for (; start < end; start++, end--)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
	}
}

